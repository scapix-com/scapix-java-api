// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_TOOLS_KEYTOOL_RESOURCES_DE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_TOOLS_KEYTOOL_RESOURCES_DE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::tools::keytool { class Resources_de; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::tools::keytool::Resources_de>
{
	static constexpr fixed_string class_name = "sun/security/tools/keytool/Resources_de";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_TOOLS_KEYTOOL_RESOURCES_DE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_TOOLS_KEYTOOL_RESOURCES_DE)
#define SCAPIX_JAVA_API_SUN_SECURITY_TOOLS_KEYTOOL_RESOURCES_DE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::tools::keytool::Resources_de : public jni::object_base<"sun/security/tools/keytool/Resources_de",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::security::tools::keytool::Resources_de> new_object() { return base_::new_object(); }
	jni::ref<jni::array<jni::array<java::lang::Object>>> getContents() { return call_method<"getContents", jni::ref<jni::array<jni::array<java::lang::Object>>>>(); }

protected:

	Resources_de(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_TOOLS_KEYTOOL_RESOURCES_DE
