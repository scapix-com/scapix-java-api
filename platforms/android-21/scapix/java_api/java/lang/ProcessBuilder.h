// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ProcessBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ProcessBuilder>
{
	static constexpr fixed_string class_name = "java/lang/ProcessBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER)
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Process.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ProcessBuilder : public jni::object_base<"java/lang/ProcessBuilder",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::ProcessBuilder> new_object(jni::ref<jni::array<java::lang::String>> command) { return base_::new_object(command); }
	static jni::ref<java::lang::ProcessBuilder> new_object(jni::ref<java::util::List> command) { return base_::new_object(command); }
	jni::ref<java::util::List> command() { return call_method<"command", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::ProcessBuilder> command(jni::ref<jni::array<java::lang::String>> command) { return call_method<"command", jni::ref<java::lang::ProcessBuilder>>(command); }
	jni::ref<java::lang::ProcessBuilder> command(jni::ref<java::util::List> command) { return call_method<"command", jni::ref<java::lang::ProcessBuilder>>(command); }
	jni::ref<java::io::File> directory() { return call_method<"directory", jni::ref<java::io::File>>(); }
	jni::ref<java::lang::ProcessBuilder> directory(jni::ref<java::io::File> directory) { return call_method<"directory", jni::ref<java::lang::ProcessBuilder>>(directory); }
	jni::ref<java::util::Map> environment() { return call_method<"environment", jni::ref<java::util::Map>>(); }
	jboolean redirectErrorStream() { return call_method<"redirectErrorStream", jboolean>(); }
	jni::ref<java::lang::ProcessBuilder> redirectErrorStream(jboolean redirectErrorStream) { return call_method<"redirectErrorStream", jni::ref<java::lang::ProcessBuilder>>(redirectErrorStream); }
	jni::ref<java::lang::Process> start() { return call_method<"start", jni::ref<java::lang::Process>>(); }

protected:

	ProcessBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER