// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/resources/ParallelListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_FORMATDATA_EN_US_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_FORMATDATA_EN_US_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::resources { class FormatData_en_US; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::resources::FormatData_en_US>
{
	static constexpr fixed_string class_name = "sun/text/resources/FormatData_en_US";
	using base_classes = std::tuple<scapix::java_api::sun::util::resources::ParallelListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_FORMATDATA_EN_US_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_FORMATDATA_EN_US)
#define SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_FORMATDATA_EN_US

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::resources::FormatData_en_US : public jni::object_base<"sun/text/resources/FormatData_en_US",
	sun::util::resources::ParallelListResourceBundle>
{
public:

	static jni::ref<sun::text::resources::FormatData_en_US> new_object() { return base_::new_object(); }

protected:

	FormatData_en_US(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_RESOURCES_FORMATDATA_EN_US
