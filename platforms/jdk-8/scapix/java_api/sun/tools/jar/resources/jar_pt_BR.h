// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_PT_BR_FWD
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_PT_BR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::tools::jar::resources { class jar_pt_BR; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::tools::jar::resources::jar_pt_BR>
{
	static constexpr fixed_string class_name = "sun/tools/jar/resources/jar_pt_BR";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_PT_BR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_PT_BR)
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_PT_BR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::tools::jar::resources::jar_pt_BR : public jni::object_base<"sun/tools/jar/resources/jar_pt_BR",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::tools::jar::resources::jar_pt_BR> new_object() { return base_::new_object(); }

protected:

	jar_pt_BR(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_PT_BR
