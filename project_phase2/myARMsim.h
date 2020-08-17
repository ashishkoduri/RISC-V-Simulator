//reads from the instruction memory and updates the instruction register
void fetch();
//reads the instruction register, reads operand1, operand2 fromo register file, decides the operation to be performed in execute stage
void decode();
//executes the ALU operation based on ALUop
void execute();
//perform the memory operation
void memcall();
//writes the results back to register file
void registerupdate();


int datamem_load(n_bytes, unsigned int address);
void datastore_store(n_bytes, unsigned int address, unsigned int data);

