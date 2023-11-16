
## 2.1 MEMORY

### 2.1.1 STATIC AND DYNAMIC MEMORY

**Memory Allocation:** 
- Memory allocation is a process by which computer programs and services are assigned with physical or virtual memory space. 
- The memory allocation is done either before or at the time of program execution. There are two types of memory allocations:   
	1. Compile-time or Static Memory Allocation
	2.  Run-time or Dynamic Memory Allocation

1. **Static Memory Allocation:** 
	- Static Memory is allocated for declared variables by the compiler. 
	- The address can be found using the address of operator and can be assigned to a pointer. 
	- The memory is allocated during compile time. 

2. **Dynamic Memory Allocation:** 
	- Memory allocation done at the time of execution(run time) is known as **dynamic memory allocation**. 
	- Functions calloc() and malloc() support allocating dynamic memory. 
	- In the Dynamic allocation the memory space is allocated by using these functions when the value is returned by functions it is assigned to pointer variables.
	1. **malloc() method**
		- The malloc or memory allocation method in C is used to dynamically allocate a single large block of memory with the specified size. 
		- It returns a pointer of type void which can be cast into a pointer of any form.

		![[2.1.1.1 Malloc-function-in-c.png]]

	![2.1.1.1 Malloc-function-in-c.png](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/2.1.1.1%20Malloc-function-in-c.png?raw=true)

	2. **calloc() method**
		-  calloc or contiguous allocation method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. 
		- it is very much similar to malloc() but has two different points and these are:
			1.  It initializes each block with a default value ‘0’.
			2.  It has two parameters or arguments as compare to malloc().
			
		![[2.1.1.2 calloc-function-in-c.png]]

	![2.1.1.2 calloc-function-in-c.png](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/2.1.1.2%20calloc-function-in-c.png?raw=true)

	 1. **free() method**
		- free method in C is used to dynamically de-allocate the memory. 
		- The memory allocated using functions malloc() and calloc() is not de-allocated on their own.

		![[2.1.1.3 Free-function-in-c.png]]

	![2.1.1.3 Free-function-in-c.png](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/2.1.1.3%20Free-function-in-c.png?raw=true)

### 2.1.2 RANDOM ACCESS MEMORY (RAM)

- is really the main store and is the place where the program and software we load gets stored.
- When CPU runs a program, it fetches the program instructions from the RAM and carries them out.
- Similarly, if the CPU needs to store the final results of calculations, it stores those in RAM.
- CPU can READ and WRITE data in RAM
- if computer has large RAM, you can run larger programs.
- known as volatile memory, the stored data are lost, if the power goes off.
- Mother board is a microcomputer circuit board that contains slots for connecting peripherals like RAM modules, CPU and adapter cards.
- Motherboards also have electronic circuitry for handling such tasks as I/O signals from those peripheral devices.
- the first home PC’s use to have 64 KB of RAM memory and now we need minimum of 64 MB. A RAM memory chips come in many different sizes ranging from 1 MB to 128 GB.
- **Static Random Access Memory (SRAM):**
	- Data is stored in transistors and requires a constant power flow.
	- Because of the continuous power, SRAM doesn’t need to be refreshed to remember the data being stored.
	- SRAM is called static as no change or action.
	- refreshing is not needed to keep the data intact.
	- It is used in cache memories.
	- Advantage: Low power consumption and faster access speeds.
	- Disadvantage: Fewer memory capacities and high costs of manufacturing.
- Dynamic Random Access Memory (DRAM):
	- Data is stored in capacitors.
	- Capacitors that store data in DRAM gradually discharge energy, no energy means the data has been lost.
	- periodic refresh of power is required in order to function.
	- DRAM is called dynamic as constant change or action.
	- refreshing is needed to keep the data intact.
	- It is used to implement main memory.
	- Advantage: Low costs of manufacturing and greater memory capacities.
	- Disadvantage: Slow access speed and high power consumption.

| SRAM                                                 | DRAM                                                |
| ---------------------------------------------------- | --------------------------------------------------- |
| stores information as long as the power is supplied. | stores information as long as the power is supplied |
| Transistors are used to store information            | Capacitors are used to store data                   |
| no refreshing is required.                           | needs to be refreshed periodically.                 |
| is faster                                            | provides slow access speeds.                        |
| are expensive.                                       | are cheaper.                                        |
| are low-density devices.                             | are high-density devices.                           |
| bits are stored in voltage form.                     | bits are stored in the form of electric energy.     |
| are used in cache memories.                          | are used in main memories.                          |
| Consumes more power and generates more heat.         | Uses less power and generates less heat.            | 

### 2.1.3 ROM (Read-Only Memory)

- A Read-Only memory (RAM) is one in which information is permanently stored. Computer almost always contains a small amount of ROM.
- ROM is used for storing special set of instruction, which the computer needs when it start up.
- it is not possible to WRITE fresh information to it. CPU can only fetch or READ instructions.
- The contents of the ROM does not get erased when computer switched off. it is non-volatile memory.

### 2.1.4 PROM (Programmable Read-Only Memory)

- A PROM is a memory chip on which data can be written only once.
- PROM refers to the kind of ROM that the user can burn information into unlike ROM which is provided by the computer manufacturer.
- It is a user-programmable memory.
- Once a program has been written the recorded information cannot be changed. It is also a non-volatile memory.
- The basic difference between PROM and a ROM is that a PROM is manufactured as blank memory.
- To write data on a PROM chip, you need a special device called a PROM programmer or a PROM burner.
- process of programming a PROM is sometimes called burning the PROM.

### 2.1.5 EPROM (Erasable Programmable Read-Only Memory)

- It is a memory chip that is non-volatile in nature.
- It can be reused again and again as it is easily programmable and erasable.
 - Reprogrammed to store new information by using a special device called a PROM programmer or a PROM burner.
 - In 1967, Dawon Kahng and Simon Sze at Bell Labs proposed that the floating gate of a MOSFET(metal-oxide-semiconductor field-effect transistor) could be used for the cell of a reprogrammable ROM (read-only memory).
 - With this concept in mind, Dov Frohman of Intel invented EPROM in 1971. Frohman designed the Intel 1702, a 2048-bit EPROM, which was announced by Intel in 1971.

**Characteristics**

- Every EPROM is programmed by electronic devices.
- EPROM is erased by exposing it to ultraviolet light.
- can store data minimum for 10-20 years.
- Erasing window is kept covered to avoid unwanted exposure to UV light to avoid data loss.

**Advantages**

- Easily erasable and programmable.
- Quite effective – Eliminates the need of other external memory.

**Disadvantages**

- A particular selected data is not deleted the whole data gets erased.
- User needs to keep backup as whole data gets erased.
- It needs UV light to erase the data which is very rare.
- Process of erasing data is quite complex.

### 2.1.6 EEPROM (Electrically Erasable Programmable Read-Only Memory)

- EEPROM is a type of non-volatile primary memory.
- uses electrical signals to erase and program the contents.
- used as a chip in computers to store the digital data.
- two types of EEPROM – Serial EEPROM Parallel EEPROM
- EEPROM was developed in 1978 at Intel by George Perlegos.
- stores a large capacity of data or bits compared to EPROM.
- It is used as flash memories in its later version and also, to store BIOS of the computer.

**Characteristics**

- Less time consuming: 
	- EEPROM takes 5-10 milliseconds to erase the content electronically
- Programmable and erasable content:
	- It can be reprogrammed n number of times and that life cycle has to be defined by the manufacture and it can be maximum of 1 million life cycles in modern EEPROMs.
- No detaching of chip: 
	- To reprogram or erase the content, there is no need to take the chip out of the computer.

**Advantages**

- Fast erasing of data and can erase all contents or can erase by particular byte.
- is non-volatile
- Easy to reprogram without taking it out from computer and do not require any additional equipment.

**Disadvantages**

- Data retention problem as insulator used is not a perfect insulator and manufacture provides data retention upto 10 years.
- requires different voltages for reading, writing and erasing the content.

### 2.1.7 FLASH MEMORY

- Flash memory is non-volatile computer memory that can be electrically erased and reprogrammed.
- It is a technology that is primarily used in memory cards and USB flash drives.
- It is a specific type of EEPROM that is erased and programmed in large blocks.  
- it does not need power to maintain the information stored in the chip.
- offers fast read access times and better kinetic shock resistance than hard disks.

**Popular flash memory devices**

**Memory Stick:**

- It is an IC (Integrated Circuit) which is stored in a compact and rugged plastic enclosure.
-  are designed to store data and to enable the transfer of data between devices equipped with Memory Stick slots.

**Compact Flash:**

- It is an IC (Integrated Circuit) which is stored in a compact and
rugged plastic enclosure.
- are designed to store data and to enable the transfer of data between devices equipped with Compact Flash slots. Current Compact 
- capacities range up to 8GB.

**SD Card (Secure Digital Card):**

- It is an IC (Integrated Circuit) which is stored in a compact and rugged plastic enclosure.
- are designed to store data and to enable the transfer of data between devices equipped with SD Card slots.
- capacities range up to 16 GB.

Multimedia Card (MMC):

- It is an IC (Integrated Circuit) which is stored in a compact and rugged plastic enclosure.
- are designed to store data and to enable the transfer of data between devices equipped with Multi-Media Card (MMC) slots.
- capacities range up to 2GB.

**Types of Flash Memory**

- NOR Flash was the first of the two to be introduced in 1988 by Intel.
- while NAND Flash was later introduced by Toshiba in 1989.
- NOR and NAND are named for the way the floating gates of the memory cells that hold data are interconnected in configurations that resemble a NOR or a NAND logic gate.

1. NOR Flash
- NOR Flash is optimized for random access capabilities where it is able to access data in any order and doesn’t require following a sequence.
- In terms of its architecture, each of NOR Flash’s memory cells are connected in parallel where one end of the memory cell is connected to the source line and the other end is connected to the bit line.
- This allows the system to access individual memory cells.

2. NAND Flash
- Conversely, NAND Flash is optimized for high-density data storage and gives up the ability for random access capabilities.
- NAND Flash cells are connected, usually eight memory transistors at time, in a series to the bit line called a string.
- the source of one cell is connected to the drain of the next one.
- This series connection reduces the number of ground wires and bit lines.

### 2.1.8 CACHE

- Cache Memory is a special high speed mechanism. It can be either a reserved part of main memory or an independent high speed storage device.
- There are two types of caching are commonly used are memory caching and disk caching.
- A memory cache, sometimes called a cache store or RAM cache, is a portion of memory made of high-speed static RAM.
- Memory caching is effective because by keeping as much of this information as possible in SRAM, the computer avoids accessing the slower DRAM.
- A disk cache uses conventional main memory.
- The most recently accessed data from the disk is stored in a memory buffer.
- When a program needs to access data from the disk, it first checks the disk cache to see if the data is there.
- Disk caching can dramatically improve the performance of applications, because accessing a byte of data in RAM can be thousands of times faster than accessing a byte on a hard disk.
- There are other caches like page cache, L1 cache, L2 Cache, virtual memory.

L2 Cache: 
- If there is some special memory bank in the motherboard which is small but very fast and two times faster than the main memory access. That's called a level 2 cache or an L2 cache.

L1 cache: 
- If there is smaller but faster memory system directly into the microprocessor's chip and this memory will be accessed at the speed of the microprocessor and not the speed of the memory bus, That's an L1 cache.

## 2.2 STORAGE DEVICES

- Physical components or materials on which data is stored are called storage media.
- Hardware components that read/write to storage media are called storage devices.

*Two main categories of storage technology used today are magnetic storage and optical storage.*

**Primary magnetic storage**
- Diskettes
- Hard disks (both fixed and removable)
- High capacity floppy disks
- Disk cartridges
- Magnetic tape

**Primary optical storage**
- Compact Disk Read Only Memory (CD ROM)
- Digital Video Disk Read Only Memory (DVD ROM)
- CD Recordable (CD R)
- CD Rewritable (CD RW)
- Photo CD

### 2.2.1 HARD DISK

- also known as a hard drive or fixed disk.
- It is said to be rigid magnetic disc that stores data.
- located within a drive unit.
- It is a non-volatile storage device that contains platters and magnetic disks rotating at high speeds.

![[2.1 Parts of a hard disk.png]]

![2.1 Parts of a hard disk](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/2.1%20Parts%20of%20a%20hard%20disk.png?raw=true)

- installed internally in computer system.
- Hard disk is located within a drive unit on the computer's motherboard and comprises one or more platters packed in an air-sealed casing.
- Its main components include a read/write actuator arm, head actuator, read/write head, spindle, and platter.
- A circuit board (also called as the interface board or disk controller) is present on the back of a hard drive. It lets the hard drive to communicate with the computer.

![[2.2 Data storage in a Hard disk.png]]

![2.2 Data storage in a Hard disk](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/2.2%20Data%20storage%20in%20a%20Hard%20disk.png?raw=true)

**Function of Hard disk**

- is a secondary storage device, designed to store data permanently.
- include a large storage capacity as compared to the primary storage.
- Firest introduced in the year 1956 by IBM.
- The first personal computer contains a hard drive of less than 1 megabyte.
- The size of hard drives is measured in gigabytes and terabytes.

**Advantages of the hard disk**

- its cost is low.
- it is readily available in the market.
- It is faster than optical disks.
- The capacity for storing the data is large.

**Disadvantages of the hard disk**

- The speed of reading and writing is slower.
- HDDs are noisy.
- HDDs are energy inefficient.
- consume more power.
- The form factor of HDDs is heavier than the SSDs.


### 2.2.2 ZIP DISK

- A Zip drive is a medium-capacity and portable magnetic disk storage system launched by Iomega in the mid-1990s.
- The Zip drive was capable of fast data transfer and was durable and reliable.
- The Zip drive was available in 100- and 250-MB capacities.
- The initial versions of the drive could be connected to a computer by means of a parallel, SCSI or IDE port.
- The later versions had a USB interface.
- The Zip drive also contained a retro-reflective spot for identifying the proper disk media in order to prevent damage to the disk and drive.
- It was favored in the graphic arts vertical market and was also economical for home users at the time of launch for storing large data.
- Zip drives were reportedly prone to click-of-death failures.


### 2.2.3 OPTICAL DISK

- The most popular alternative to magnetic storage systems are optical storage media.
- most widely used type of optical storage medium is the compact disk (CD), which is used in CD-ROM, DVD-ROM, CDR, CDRW and PhotoCD systems.
- These devices fall into the optical storage category because they store data on a reflective surface so that it can be read by a beam of laser light.
- A laser uses concentrated, narrow beam of light, focused and directed with lenses, prisms and mirrors.
- The tight focus of the laser beam is possible because all the light is of the same wavelength.

**CD-ROM**

- The familiar audio compact disk is a popular medium for storing music. 
- In the computer world, the medium is called compact disk read only memory (CD-ROM).
- This uses the same technology used to produce music CDs.
- The CD-ROM drive for music or data reads 0s and 1s from a spinning disk by focusing a laser on the disks surface.
- Some areas of the disk reflect the laser light into a sensor, other areas scatter the light. A spot that reflects the laser beam is interpreted as a 1 and the absence of a reflection is interpreted as a 0.
- Data is stored in the form of lands, which are flat areas on the metals surface, and pits, which are depressions or hollows.
- A land reflects the laser light into the sensor (a data bit of 1) and a pit scatters the light (a data bit of 0).
- A standard CD can store 650 MB of data or about 70 mins of audio.

**CD-ROM Speeds**

- CD-ROM drives are quite slow, in part because the laser reads pits and lands one bit at a time.
- Another reason is the rotational speed of the disk.
- Like a track on a magnetic disk the track of an optical disk is split into sectors.
- However the sectors are laid out quite differently.
- The sectors near the middle of the CD wrap farther around the disk than those near the edge.
- Changing the speed of rotation takes time – enough to seriously impair the overall performance.
- The first CD-ROM drives read data at 150 KBps and were known as single speed drives.
- Presently CD-ROM drives read data at 300 to 7800 KBps.
- The medium is a foil disk that is physically pitted to reflect or scatter the laser beam. 
- The disk is then covered in a plastic coating and it is difficult to alter the surface of the disk after it has been stamped.

**CD-ROM Uses**

- In fact many applications rely on huge volumes of data that rarely change. 
- Because of the high precision and data density possible with CD-ROM, a single CD typically can hold about 650 MB of data.
- Software companies can distribute their products on CD-ROM.
- fact that 1 CD much cheaper to produce than a set of diskettes, many software publishers regard CDs as the distribution medium of choice.

**DVD-ROM**

- Digital video (or versatile) disk read only memory, is a high-density medium capable of storing a full-length movie on a single disk the size of a CD.
- Achieves such high storage capacities by using both sides of the disk and special data compression technologies.
- The latest generation of DVD-ROM use layers of data tracks; the laser beam reads data from the first layer and then looks through it to read data from the second layer.
- Each side of a standard DVD-ROM can hold up to 4.7 GB. 
- Dual layer DVD-ROM can hold 17 GB of data.

**CD-R, CD-RW, PhotoCD**

- CD-R allows you to create your own CD-ROM disks that can be read by any CD- ROM drive. After the information has been written to the CD it cannot be changed.
- Using CD-RW drives the user can write and overwrite data onto CDs. With a CD- RW data can be revised in the same manner as a floppy disk.
- PhotoCD, a standard developed by Kodak for storing digitised photographic images on a CD.

### 2.2.4 PEN DRIVE

- is often known as a memory stick or USB stick, is a portable electronic device that is used to store different types of data.
- can be easily carried to any place.
- data from the pen drives can be easily assessed by attaching it to the USB ports.
- The data storage capacity of the pen drives usually ranges from 2 GB to 128 GB, but the latest designed pen drives are also available in a few range of TBs.
- The weight of the standard pen drive is around 30 grams.
- The pen drive comprises a small printed circuit board (PCB), which is usually built of plastic or metallic body.
- This device used the technology of EPROM.
- The PCB is provided with a power circuit, integrated circuits, and USB connectors.
- One of the integrated circuits acts as the interface between the USB connectors and the memory, and another integrated circuit is a NAND flash memory, which stores all the data.
- The data stored in the pen drive is controlled by a 12MHz clock signal crystal oscillator.

![[2.3 The internal structure of the pen drive..png]]

![2.3 The internal structure of the pen drive](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/2.3%20The%20internal%20structure%20of%20the%20pen%20drive..png?raw=true)

*1. USB Connector*

- The USB connector is the interface between the computer (where the pen drive is attached) and the NAND flash memory chip.
- The electric power from the computer is consumed by the pen drive through the USB connector.

*2. USB Mass Storage Controller/Controller Chip*

- The controller chip is called the brain of the pen drive.
- This chip helps to read or record the information/data on the NAND flash memory.
- It also helps to recover the data from the pen drive.

*3. NAND Flash Memory Chip*

- The purpose of the NAND flash memory chip is to store the data.
- The NAND flash uses the electric circuits for storing the data and it stores the data in the forms of blocks.
- The NAND flash memory retains the data even when the power is cut-off as the metal oxide semiconductor layer provides the supply of an extra electric charge to retain the data.
- The NAND memory cells consist of two gates, i.e., control gate and floating gates.
- These gates help in controlling the transfer of data.
- The NAND gate stores the data as one byte (one word) at a time, but the data is erased in the blocks.

*4. Crystal Oscillator*

- The crystal oscillator is a small piece of quartz fitted in the pen drive, which vibrates at a specific frequency.
- It acts as a small clock inside the Pendrive, which manages the functioning/timing of each component inside the pen drive by providing accurate timings.

Other Components of Pen Drive

*1. Outer Cover*
- It refers to the part of the USB that we see from the outside.

*2. LED*
- It is used to indicate the working condition of the Pendrive.

*3. Test Points*
- Test points are certain locations/pins that are mounted during the manufacturing process on the pen drive. 
- These points are used to check the working of the device and help in the repairing process in case of any failure.

*4. Write Protect Switch*
- It is an optional component and is generally installed in pen drives if the user demands high data security.
- It is a tiny switch, which safeguards the data stored on the pen drive from the host devices.

*5. Second NAND flash Memory Chip Space*
- It is the additional slot, which is added into some pen drives during the manufacturing process, where another NAND flash memory chip can be installed to increase the storage capacity.

**Understanding the Theory of Pen Drive**

- The chip used in the pen drive consists of a number of transistors, which acts like tiny switches.
- The data is stored in the pen drive in the form of 1s and 0s, and each of these values is stored at specific points in the memory.
- The transistor at a specific location gets switched on and allows an electric charge to flow through it to store the value ‘1.’ 
- The pen drives are comprised of different type of transistors, which stays on/off even when there is no power supply, which is why the data remains in the pen drive even if we disconnect it from the device. 
- A normal transistor consists of three terminals, i.e., the source, drain and gate.

**Working Principle of Pen Drive**

- The transistors used in the pen drives are like ‘metal-oxide-semiconductor field-effect transistor (MOSFET) with the only difference it has two gates instead of one.
- As seen from the figure, it’s an n-p-n junction, which consists of two gates, i.e., the control gate (upper gate) and the floating gate (lower gate).
- The gates are separate with an oxide layer through which current does not flow in the normal conditions.
- The transistor is switched off in this condition and has stored the value zero.
- The source and the drain region of the MOSFET are built of the n-type silicon, hence they have a high number of electrons; 
- however, these electrons cannot directly flow from the source region to the drain region as there exists an electron-deficient, i.e., P-layer between them.
- we can force the electrons to enter the drain from the source by applying the positive voltage across the two contacts of the transistor, i.e., the bit line and the word line.
- During this situation, some of the electrons manage to pass through the oxide layer by the tunnelling process.
- These electrons stay over the floating gate.
- The electrons present on the floating gate is what we called that the transistor has stored the data as ‘one.’
- The electrons remain on the floating gate even if the positive voltage is stoped or the external power supply is switched off.

![[2.3.1 The transistor in a pendrive and charge flow in it.png]]

![2.3.1 The transistor in a pendrive and charge flow in it](https://github.com/anilkaraniya/college/blob/main/BCA/sem-1/notes/Computer%20Fundamentals/CF-Assets/2.3.1%20The%20transistor%20in%20a%20pendrive%20and%20charge%20flow%20in%20it.png?raw=true)

- The data stored can be deleted by removing the electrons from the floating gate.
- This can be done by applying the negative voltage on the word line.
- the electrons will be repelled back, and the floating gate gets clear, which eventually makes the value zero again.

**Types of Pen Drive**

*1. OTG Pendrive*
These pen drives can be directly connected to portable devices such as laptops and mobile phones.

*2. Flash Drive*
The Flash drives consist of different options of USB ports and different data transfer speeds, one can choose any out of them as per the requirement.

*3. Wifi Pen Drive*
These pen drives do not require any port for the transfer of the data. The data can be accessed or transferred within the devices without any cable connection. You just need to connect your device with the wifi Pendrive for sharing or accessing the data.

*5. Boot Flash Drive*
The boot flash drives are specially designed pen drives, which are used to install the operating system in computers or laptops.

**Applications of Pen Drives**

- is storing the data and transferring the data into different devices.
- also used for marketing purposes. Custom-designed pen drives with the logo of the company are also used
- are used for data backup. used by small businesses as a backup medium. At the end of the working day, the data is stored in the pen drive and is secured safely.
- help in creating the password reset disk.
- allow the user to run some applications on the computer even without installing them.
- also used for the booting process and this configuration is known as the Live USB.

**Advantages of Pen Drive**

- The small size and the lightweight is one of the greatest advantages of the pen drives.
- The small size and the lightweight is one of the greatest advantages of the pen drives. Hence, pen drives come in handy to store even a large amount of data.
- Pen drives have made the process of data transfer between the devices very easy.
- The transfer rate of the pen drive is very high compared to other devices, and also it is quite cheaper than the other storage devices.
- Unlike, CDs and DVDs, pen drives are not prone to any scratches.

**Disadvantages of Pen Drive**

- The pen drives are not long-lasting as each pen drive consists of a limited number of program-erasable cycles, Usually, the pen drive has around 100,000 program-erasable cycles, and after this limit, the data stored in the pen drive starts becoming corrupt.
- the chances of losing the pen drive due to its small size.
- The pen drives are more vulnerable to getting corrupt if not kept carefully.
- The major disadvantage of the pen drives is that if the pen drive consists of any virus in it, then it can spread the virus to the other devices to which it gets connected.


### 2.2.5 BLU RAY

- Blu-ray is an optical disc format such as CD and DVD.
- It was developed for recording and playing back high-definition (HD) video and for storing large amounts of data.
- Blu-ray uses a different type of laser to read the discs, allowing a single disc to store more data.
- Blu-ray disc prices tend to be largely affordable, and a Blu-ray disc’s capacity can be as large as 100GB.

**Benefits of a Blu-Ray Disc**

- the main perk a lot of users will agree with is its incredible storage capacity.
- A standard DVD holds 4.7 Gigabytes (GB) of data, enough to hold one movie.
- If a movie is longer than two hours, you will need two DVDs or a double-layer DVD that can store around 9GB. On the other hand, a double-layer Blu-ray disc can hold a massive 50GB of data.
- Image resolution simply means how your picture looks when you’re viewing the disc.
- On a DVD, you won’t be getting a high-definition movie compared to a Blu-ray disc.
- Blu-ray is made for HD, so you can rest easy knowing that you will be getting the best picture possible with 1080 HD capability for your Blu-ray movies.

**How Does a Blu-Ray Disc Work?**

- Unlike current DVDs, which use a red laser to read and write data, Blu-ray uses a blue laser.
- A blue laser has shorter wavelengths (405 nanometers) than a red laser (650 nanometers).
- The smaller beam focuses more precisely, enabling it to read information recorded in pits that are only 0.15 microns long. This is more than twice as small as the pits on a DVD.
- Each Blu-ray disc is about the same thickness (1.2 millimeters) as a DVD, but the two types of discs store data differently.
- In a DVD, the data is sandwiched between two 0.6mm polycarbonate layers.
- Having a polycarbonate layer on top of the data can cause a problem called birefringence, in which the substrate layer refracts the laser light into two separate beams. If the beam is split too widely, the disc cannot be read.
- Also, if the DVD surface is not exactly flat and not perpendicular to the beam, it can lead to a problem known as disc tilt where the laser beam is distorted.
- The Blu-ray disc overcomes DVD-reading issues by placing the data on top of a 1.1 mm thick polycarbonate layer. This prevents birefringence and the problem of disc tilt is virtually eliminated.

**What Type of File System Is Used by Blu-Ray Discs?**

- The name of the file system that is used by Blu-ray discs is called UDF, which is short for Universal Disk Format.

**Blu-Ray Vs. DVD**

- there are many differences between the DVDs and Blu-ray discs . This includes storage capacity, laser technology, disc construction, image resolution, and player compatibility.

**Storage Capacity**

- Storage capacity is measured in GB – The more GB the disc has, the more information it can hold.
- A single layer DVD can store about 4.7GB of data, while a single layer Blu-ray disc can store approximately 25GB of data.
- It is about two hours of high-definition or 13 hours of standard definition.

**Laser Technology**

- Both media use lasers to read the information stored on the disc.
- As the disc spins, the laser reads the information and transfers both picture and audio to the television.
- As the disc spins, the laser reads the information encoded on the media and produces an image and sound on your television.

### [[Subjects/Computer Fundamentals/Unit l]] 
### [[Subjects/Computer Fundamentals/Unit lll]] 
### [[Subjects/Computer Fundamentals/Unit lV]] 
