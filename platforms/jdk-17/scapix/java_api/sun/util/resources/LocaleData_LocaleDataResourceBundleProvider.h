// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/spi/ResourceBundleProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_LOCALEDATARESOURCEBUNDLEPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_LOCALEDATARESOURCEBUNDLEPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources { class LocaleData_LocaleDataResourceBundleProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::LocaleData_LocaleDataResourceBundleProvider>
{
	static constexpr fixed_string class_name = "sun/util/resources/LocaleData$LocaleDataResourceBundleProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::spi::ResourceBundleProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_LOCALEDATARESOURCEBUNDLEPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_LOCALEDATARESOURCEBUNDLEPROVIDER)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_LOCALEDATARESOURCEBUNDLEPROVIDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::resources::LocaleData_LocaleDataResourceBundleProvider : public jni::object_base<"sun/util/resources/LocaleData$LocaleDataResourceBundleProvider",
	java::lang::Object,
	java::util::spi::ResourceBundleProvider>
{
public:


protected:

	LocaleData_LocaleDataResourceBundleProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_LOCALEDATA_LOCALEDATARESOURCEBUNDLEPROVIDER
