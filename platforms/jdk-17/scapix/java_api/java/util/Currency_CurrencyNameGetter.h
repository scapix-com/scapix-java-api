// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleServiceProviderPool_LocalizedObjectGetter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYNAMEGETTER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYNAMEGETTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Currency_CurrencyNameGetter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Currency_CurrencyNameGetter>
{
	static constexpr fixed_string class_name = "java/util/Currency$CurrencyNameGetter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYNAMEGETTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYNAMEGETTER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYNAMEGETTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/spi/CurrencyNameProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Currency_CurrencyNameGetter : public jni::object_base<"java/util/Currency$CurrencyNameGetter",
	java::lang::Object,
	sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter>
{
public:

	jni::ref<java::lang::String> getObject(jni::ref<java::util::spi::CurrencyNameProvider> currencyNameProvider, jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> key, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"getObject", jni::ref<java::lang::String>>(currencyNameProvider, locale, key, params); }

protected:

	Currency_CurrencyNameGetter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_CURRENCYNAMEGETTER
