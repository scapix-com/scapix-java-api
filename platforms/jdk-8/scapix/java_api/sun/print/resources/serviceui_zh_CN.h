// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_ZH_CN_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_ZH_CN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print::resources { class serviceui_zh_CN; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::resources::serviceui_zh_CN>
{
	static constexpr fixed_string class_name = "sun/print/resources/serviceui_zh_CN";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_ZH_CN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_ZH_CN)
#define SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_ZH_CN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::resources::serviceui_zh_CN : public jni::object_base<"sun/print/resources/serviceui_zh_CN",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::print::resources::serviceui_zh_CN> new_object() { return base_::new_object(); }

protected:

	serviceui_zh_CN(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_ZH_CN
