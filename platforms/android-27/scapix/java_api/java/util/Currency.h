// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Currency; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Currency>
{
	static constexpr fixed_string class_name = "java/util/Currency";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Currency : public jni::object_base<"java/util/Currency",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::Currency> getInstance(jni::ref<java::lang::String> currencyCode) { return call_static_method<"getInstance", jni::ref<java::util::Currency>>(currencyCode); }
	static jni::ref<java::util::Currency> getInstance(jni::ref<java::util::Locale> locale) { return call_static_method<"getInstance", jni::ref<java::util::Currency>>(locale); }
	static jni::ref<java::util::Set> getAvailableCurrencies() { return call_static_method<"getAvailableCurrencies", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> getCurrencyCode() { return call_method<"getCurrencyCode", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSymbol() { return call_method<"getSymbol", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSymbol(jni::ref<java::util::Locale> locale) { return call_method<"getSymbol", jni::ref<java::lang::String>>(locale); }
	jint getDefaultFractionDigits() { return call_method<"getDefaultFractionDigits", jint>(); }
	jint getNumericCode() { return call_method<"getNumericCode", jint>(); }
	jni::ref<java::lang::String> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Currency(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CURRENCY
