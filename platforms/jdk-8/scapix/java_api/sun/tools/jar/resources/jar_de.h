// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_DE_FWD
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_DE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::tools::jar::resources { class jar_de; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::tools::jar::resources::jar_de>
{
	static constexpr fixed_string class_name = "sun/tools/jar/resources/jar_de";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_DE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_DE)
#define SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_DE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::tools::jar::resources::jar_de : public jni::object_base<"sun/tools/jar/resources/jar_de",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::tools::jar::resources::jar_de> new_object() { return base_::new_object(); }

protected:

	jar_de(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TOOLS_JAR_RESOURCES_JAR_DE
