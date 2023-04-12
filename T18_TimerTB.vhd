library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity T18_TimerTB is
end entity;

architecture sim of T18_TimerTB is
	
	constant ClockFrequency: integer :=10; --wartosc czestotliowsci zegara (10Hz)
	constant ClockPeriod: time := 1000 ms /ClockFrequency;--wartosc okresow
	
	signal Clk : std_logic :='1'; --wartosc startowa zegara
	signal Reset: std_logic :='0'; --wartosc startowa resetu
	signal Mode: std_logic :='0'; -- wartosc startowa trybu
	signal Sec : integer; --wartosc startowa sec bedzie ustawiona w programie
begin
	i_timer : entity work.T18_Timer(rt1)
	generic map (ClockFrequency => ClockFrequency) --utworzenie mapy
	port map(
		Clk =>Clk,
		Reset => Reset,
		Mode => Mode,
		Sec => Sec); --portowanie mapy
		
	Clk <=not Clk after ClockPeriod/2;
	
	process is
	begin
		Mode<='1'; --ustawienie trybu odliczania (0-rosnace,1-malejace)
		wait until rising_edge(Clk); --wait potrzebny do inicializacji
		Reset<='1'; --wylaczenie resetu po inicializacji
		
		wait;
	end process;

end architecture;