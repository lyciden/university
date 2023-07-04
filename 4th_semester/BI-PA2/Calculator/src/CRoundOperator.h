//
// Created by Denis Olshevskiy on 10.06.2023.
//

#include "COperator.h"

class CRoundOperator : public COperator {
public:
    CRoundOperator();

    ~CRoundOperator() override;

    std::shared_ptr<COperator> clone() const override;

    std::shared_ptr<CNumber> execute(const CIntegerNumber &first, const CIntegerNumber &other) const override;

    std::shared_ptr<CNumber> execute(const CIntegerNumber &first, const CDecimalNumber &other) const override;

    std::shared_ptr<CNumber> execute(const CDecimalNumber &first, const CIntegerNumber &other) const override;

    std::shared_ptr<CNumber> execute(const CDecimalNumber &first, const CDecimalNumber &other) const override;

    std::shared_ptr<CNumber> apply(const CNumber &first, const CNumber &other) const override;

    std::shared_ptr<CNumber> apply(const CNumber &number) const override;

    bool hasRemainder() const override;
};
