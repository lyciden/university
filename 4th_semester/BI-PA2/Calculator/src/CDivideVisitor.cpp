//
// Created by Denis Olshevskiy on 05.06.2023.
//

#include "CDivideVisitor.h"

std::shared_ptr<CNumber> CDivideVisitor::accept(const CIntegerNumber &first, const CNumber &other) const {
    return other.divideIntOrFl(first);
}

std::shared_ptr<CNumber> CDivideVisitor::accept(const CDecimalNumber &first, const CNumber &other) const {
    return other.divideIntOrFl(first);
}