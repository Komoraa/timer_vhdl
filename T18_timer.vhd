library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity T18_Timer is
generic(ClockFrequency: integer);
port (
	Clk : in std_logic; --zmienna zegara
	Reset : in std_logic; -- zmiena resetu
	Mode : in std_logic; -- zmienna trybu (0-odliczanie rosnace,1-malejace)
	Sec : inout integer); -- zmiena odliczanego czasu
end entity;

architecture rt1 of T18_Timer is

	signal Ticks: integer; --zmienna tickow 
	
begin
	process(Clk) is
	begin
		if rising_edge(Clk) then
		 if Reset='0' then --if ustawiajacy wartosc tickow i czasu
			Ticks <=0;
			if Mode='0' then --tryb 0 
				Sec<=0;
				end if;
			if Mode='1' then --tryb 1
				Sec<=60;
				end if;
		 else
			if Ticks=ClockFrequency-1 then --sprawdzenie czy odliczono sekunde
					Ticks <= 0;
					if Mode='0' and Sec<60 then --tryb 0 
						Sec <= Sec+1;
						end if;
					if Mode='1' and Sec>0 then --tryb 1
						Sec <= Sec-1;
						end if;
				else --odliczanie tickow
					Ticks <= Ticks+1;
				end if;
		 end if;
		end if;
	end process;
end architecture;