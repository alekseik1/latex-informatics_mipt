try {
    // dangerous code
} catch(SpecialEx e) {
    if(canHandle()) {
        // handle it
        e.what()    // return string that tells about error
    } else {
        throw NewExceptionType;
    }
}
