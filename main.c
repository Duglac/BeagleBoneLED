int main(void) {
	printf("Started");
	int LED = open("/sys/class/gpio/gpio66/direction", O_RDWR);
	write(LED, "out", 3);
	close(LED);
	LED = open("/sys/class/gpio/gpio66/value", O_WRONLY);
	for (int i = 0; i <= 10; i++){
		write(LED, "1", 1);
		sleep(2);
		write(LED, "0", 1);
		sleep(1);
	}
	printf("Finished");
}
/*
GPIO66 is P8 Pin 5
Use voltage divider to step down from 5V to 3.3V
*/
