if(p.m_type == 1) { // is A
    p.bar();
} else if(p.m_type == 2) {  // is B
    static_cast<B&>(p).bar();
    // Cast p to B&, after that call bar() -- it will be from B
} else {    // is C
    static_cast<C&>(p).C::bar();
    // Call bar() from C namespace, the same idea
}
