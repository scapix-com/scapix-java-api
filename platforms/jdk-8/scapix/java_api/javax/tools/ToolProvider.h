// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TOOLS_TOOLPROVIDER_FWD
#define SCAPIX_JAVA_API_JAVAX_TOOLS_TOOLPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::tools { class ToolProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::tools::ToolProvider>
{
	static constexpr fixed_string class_name = "javax/tools/ToolProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_TOOLPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TOOLS_TOOLPROVIDER)
#define SCAPIX_JAVA_API_JAVAX_TOOLS_TOOLPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/javax/tools/DocumentationTool.h>
#include <scapix/java_api/javax/tools/JavaCompiler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::tools::ToolProvider : public jni::object_base<"javax/tools/ToolProvider",
	java::lang::Object>
{
public:

	static jni::ref<javax::tools::JavaCompiler> getSystemJavaCompiler() { return call_static_method<"getSystemJavaCompiler", jni::ref<javax::tools::JavaCompiler>>(); }
	static jni::ref<javax::tools::DocumentationTool> getSystemDocumentationTool() { return call_static_method<"getSystemDocumentationTool", jni::ref<javax::tools::DocumentationTool>>(); }
	static jni::ref<java::lang::ClassLoader> getSystemToolClassLoader() { return call_static_method<"getSystemToolClassLoader", jni::ref<java::lang::ClassLoader>>(); }

protected:

	ToolProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_TOOLPROVIDER
