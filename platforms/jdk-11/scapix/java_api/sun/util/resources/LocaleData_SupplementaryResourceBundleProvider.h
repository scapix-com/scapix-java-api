// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/resources/LocaleData_LocaleDataResourceBundleProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_SUPPLEMENTARYRESOURCEBUNDLEPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_SUPPLEMENTARYRESOURCEBUNDLEPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources { class LocaleData_SupplementaryResourceBundleProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::LocaleData_SupplementaryResourceBundleProvider>
{
	static constexpr fixed_string class_name = "sun/util/resources/LocaleData$SupplementaryResourceBundleProvider";
	using base_classes = std::tuple<scapix::java_api::sun::util::resources::LocaleData_LocaleDataResourceBundleProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_SUPPLEMENTARYRESOURCEBUNDLEPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_SUPPLEMENTARYRESOURCEBUNDLEPROVIDER)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_SUPPLEMENTARYRESOURCEBUNDLEPROVIDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::resources::LocaleData_SupplementaryResourceBundleProvider : public jni::object_base<"sun/util/resources/LocaleData$SupplementaryResourceBundleProvider",
	sun::util::resources::LocaleData_LocaleDataResourceBundleProvider>
{
public:

	static jni::ref<sun::util::resources::LocaleData_SupplementaryResourceBundleProvider> new_object() { return base_::new_object(); }

protected:

	LocaleData_SupplementaryResourceBundleProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_SUPPLEMENTARYRESOURCEBUNDLEPROVIDER
