// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYPROPERTY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Currency_CurrencyProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Currency_CurrencyProperty>
{
	static constexpr fixed_string class_name = "java/util/Currency$CurrencyProperty";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYPROPERTY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYPROPERTY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Currency_CurrencyProperty : public jni::object_base<"java/util/Currency$CurrencyProperty",
	java::lang::Object>
{
public:


protected:

	Currency_CurrencyProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYPROPERTY
