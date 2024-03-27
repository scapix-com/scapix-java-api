// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class System; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::System>
{
	static constexpr fixed_string class_name = "java/lang/System";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SYSTEM)
#define SCAPIX_JAVA_API_JAVA_LANG_SYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Console.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/SecurityManager.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/channels/Channel.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Properties.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::System : public jni::object_base<"java/lang/System",
	java::lang::Object>
{
public:

	static jni::ref<java::io::PrintStream> err() { return get_static_field<"err", jni::ref<java::io::PrintStream>>(); }
	static jni::ref<java::io::InputStream> in() { return get_static_field<"in", jni::ref<java::io::InputStream>>(); }
	static jni::ref<java::io::PrintStream> out() { return get_static_field<"out", jni::ref<java::io::PrintStream>>(); }

	static void setIn(jni::ref<java::io::InputStream> in) { return call_static_method<"setIn", void>(in); }
	static void setOut(jni::ref<java::io::PrintStream> out) { return call_static_method<"setOut", void>(out); }
	static void setErr(jni::ref<java::io::PrintStream> err) { return call_static_method<"setErr", void>(err); }
	static jni::ref<java::io::Console> console() { return call_static_method<"console", jni::ref<java::io::Console>>(); }
	static jni::ref<java::nio::channels::Channel> inheritedChannel() { return call_static_method<"inheritedChannel", jni::ref<java::nio::channels::Channel>>(); }
	static void setSecurityManager(jni::ref<java::lang::SecurityManager> s) { return call_static_method<"setSecurityManager", void>(s); }
	static jni::ref<java::lang::SecurityManager> getSecurityManager() { return call_static_method<"getSecurityManager", jni::ref<java::lang::SecurityManager>>(); }
	static jlong currentTimeMillis() { return call_static_method<"currentTimeMillis", jlong>(); }
	static jlong nanoTime() { return call_static_method<"nanoTime", jlong>(); }
	static void arraycopy(jni::ref<java::lang::Object> p1, jint p2, jni::ref<java::lang::Object> p3, jint p4, jint p5) { return call_static_method<"arraycopy", void>(p1, p2, p3, p4, p5); }
	static jint identityHashCode(jni::ref<java::lang::Object> x) { return call_static_method<"identityHashCode", jint>(x); }
	static jni::ref<java::util::Properties> getProperties() { return call_static_method<"getProperties", jni::ref<java::util::Properties>>(); }
	static jni::ref<java::lang::String> lineSeparator() { return call_static_method<"lineSeparator", jni::ref<java::lang::String>>(); }
	static void setProperties(jni::ref<java::util::Properties> props) { return call_static_method<"setProperties", void>(props); }
	static jni::ref<java::lang::String> getProperty(jni::ref<java::lang::String> key) { return call_static_method<"getProperty", jni::ref<java::lang::String>>(key); }
	static jni::ref<java::lang::String> getProperty(jni::ref<java::lang::String> key, jni::ref<java::lang::String> def) { return call_static_method<"getProperty", jni::ref<java::lang::String>>(key, def); }
	static jni::ref<java::lang::String> setProperty(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_static_method<"setProperty", jni::ref<java::lang::String>>(key, value); }
	static jni::ref<java::lang::String> clearProperty(jni::ref<java::lang::String> key) { return call_static_method<"clearProperty", jni::ref<java::lang::String>>(key); }
	static jni::ref<java::lang::String> getenv(jni::ref<java::lang::String> name) { return call_static_method<"getenv", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::util::Map> getenv() { return call_static_method<"getenv", jni::ref<java::util::Map>>(); }
	static void exit(jint status) { return call_static_method<"exit", void>(status); }
	static void gc() { return call_static_method<"gc", void>(); }
	static void runFinalization() { return call_static_method<"runFinalization", void>(); }
	static void runFinalizersOnExit(jboolean value) { return call_static_method<"runFinalizersOnExit", void>(value); }
	static void load(jni::ref<java::lang::String> filename) { return call_static_method<"load", void>(filename); }
	static void loadLibrary(jni::ref<java::lang::String> libname) { return call_static_method<"loadLibrary", void>(libname); }
	static jni::ref<java::lang::String> mapLibraryName(jni::ref<java::lang::String> p1) { return call_static_method<"mapLibraryName", jni::ref<java::lang::String>>(p1); }

protected:

	System(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SYSTEM
