// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/resources/OpenListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CURRENCYNAMES_EN_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CURRENCYNAMES_EN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources::cldr { class CurrencyNames_en; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::cldr::CurrencyNames_en>
{
	static constexpr fixed_string class_name = "sun/util/resources/cldr/CurrencyNames_en";
	using base_classes = std::tuple<scapix::java_api::sun::util::resources::OpenListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CURRENCYNAMES_EN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CURRENCYNAMES_EN)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CURRENCYNAMES_EN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::resources::cldr::CurrencyNames_en : public jni::object_base<"sun/util/resources/cldr/CurrencyNames_en",
	sun::util::resources::OpenListResourceBundle>
{
public:

	static jni::ref<sun::util::resources::cldr::CurrencyNames_en> new_object() { return base_::new_object(); }

protected:

	CurrencyNames_en(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CURRENCYNAMES_EN