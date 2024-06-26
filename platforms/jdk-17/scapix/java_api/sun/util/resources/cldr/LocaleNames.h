// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/resources/OpenListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_LOCALENAMES_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_LOCALENAMES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources::cldr { class LocaleNames; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::cldr::LocaleNames>
{
	static constexpr fixed_string class_name = "sun/util/resources/cldr/LocaleNames";
	using base_classes = std::tuple<scapix::java_api::sun::util::resources::OpenListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_LOCALENAMES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_LOCALENAMES)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_LOCALENAMES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::resources::cldr::LocaleNames : public jni::object_base<"sun/util/resources/cldr/LocaleNames",
	sun::util::resources::OpenListResourceBundle>
{
public:

	static jni::ref<sun::util::resources::cldr::LocaleNames> new_object() { return base_::new_object(); }

protected:

	LocaleNames(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_LOCALENAMES
