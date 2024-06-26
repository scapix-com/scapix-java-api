// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TOOLS_JAVACOMPILER_COMPILATIONTASK_FWD
#define SCAPIX_JAVA_API_JAVAX_TOOLS_JAVACOMPILER_COMPILATIONTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::tools { class JavaCompiler_CompilationTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::tools::JavaCompiler_CompilationTask>
{
	static constexpr fixed_string class_name = "javax/tools/JavaCompiler$CompilationTask";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::Callable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_JAVACOMPILER_COMPILATIONTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TOOLS_JAVACOMPILER_COMPILATIONTASK)
#define SCAPIX_JAVA_API_JAVAX_TOOLS_JAVACOMPILER_COMPILATIONTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::tools::JavaCompiler_CompilationTask : public jni::object_base<"javax/tools/JavaCompiler$CompilationTask",
	java::lang::Object,
	java::util::concurrent::Callable>
{
public:

	void setProcessors(jni::ref<java::lang::Iterable> p1) { return call_method<"setProcessors", void>(p1); }
	void setLocale(jni::ref<java::util::Locale> p1) { return call_method<"setLocale", void>(p1); }
	jni::ref<java::lang::Boolean> call() { return call_method<"call", jni::ref<java::lang::Boolean>>(); }

protected:

	JavaCompiler_CompilationTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_JAVACOMPILER_COMPILATIONTASK
