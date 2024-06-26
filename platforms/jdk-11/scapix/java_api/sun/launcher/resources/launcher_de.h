// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_LAUNCHER_RESOURCES_LAUNCHER_DE_FWD
#define SCAPIX_JAVA_API_SUN_LAUNCHER_RESOURCES_LAUNCHER_DE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::launcher::resources { class launcher_de; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::launcher::resources::launcher_de>
{
	static constexpr fixed_string class_name = "sun/launcher/resources/launcher_de";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_LAUNCHER_RESOURCES_LAUNCHER_DE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_LAUNCHER_RESOURCES_LAUNCHER_DE)
#define SCAPIX_JAVA_API_SUN_LAUNCHER_RESOURCES_LAUNCHER_DE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::launcher::resources::launcher_de : public jni::object_base<"sun/launcher/resources/launcher_de",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::launcher::resources::launcher_de> new_object() { return base_::new_object(); }

protected:

	launcher_de(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_LAUNCHER_RESOURCES_LAUNCHER_DE
