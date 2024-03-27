// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_FR_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_FR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print::resources { class serviceui_fr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::resources::serviceui_fr>
{
	static constexpr fixed_string class_name = "sun/print/resources/serviceui_fr";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_FR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_FR)
#define SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_FR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::resources::serviceui_fr : public jni::object_base<"sun/print/resources/serviceui_fr",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::print::resources::serviceui_fr> new_object() { return base_::new_object(); }

protected:

	serviceui_fr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_RESOURCES_SERVICEUI_FR