// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_LOGGER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_LOGGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class System_Logger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::System_Logger>
{
	static constexpr fixed_string class_name = "java/lang/System$Logger";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_LOGGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_LOGGER)
#define SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_LOGGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/System_Logger_Level.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::System_Logger : public jni::object_base<"java/lang/System$Logger",
	java::lang::Object>
{
public:

	using Level = System_Logger_Level;

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isLoggable(jni::ref<java::lang::System_Logger_Level> p1) { return call_method<"isLoggable", jboolean>(p1); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::String> msg) { return call_method<"log", void>(level, msg); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::function::Supplier> msgSupplier) { return call_method<"log", void>(level, msgSupplier); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::Object> obj) { return call_method<"log", void>(level, obj); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::String> msg, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, msg, thrown); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::function::Supplier> msgSupplier, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, msgSupplier, thrown); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"log", void>(level, format, params); }
	void log(jni::ref<java::lang::System_Logger_Level> p1, jni::ref<java::util::ResourceBundle> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::Throwable> p4) { return call_method<"log", void>(p1, p2, p3, p4); }
	void log(jni::ref<java::lang::System_Logger_Level> p1, jni::ref<java::util::ResourceBundle> p2, jni::ref<java::lang::String> p3, jni::ref<jni::array<java::lang::Object>> p4) { return call_method<"log", void>(p1, p2, p3, p4); }

protected:

	System_Logger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SYSTEM_LOGGER
