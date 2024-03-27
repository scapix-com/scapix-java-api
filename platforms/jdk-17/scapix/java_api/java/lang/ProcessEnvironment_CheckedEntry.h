// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map_Entry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_CHECKEDENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_CHECKEDENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ProcessEnvironment_CheckedEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ProcessEnvironment_CheckedEntry>
{
	static constexpr fixed_string class_name = "java/lang/ProcessEnvironment$CheckedEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Map_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_CHECKEDENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_CHECKEDENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_CHECKEDENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ProcessEnvironment_CheckedEntry : public jni::object_base<"java/lang/ProcessEnvironment$CheckedEntry",
	java::lang::Object,
	java::util::Map_Entry>
{
public:

	static jni::ref<java::lang::ProcessEnvironment_CheckedEntry> new_object(jni::ref<java::util::Map_Entry> e) { return base_::new_object(e); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getValue() { return call_method<"getValue", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> setValue(jni::ref<java::lang::String> value) { return call_method<"setValue", jni::ref<java::lang::String>>(value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ProcessEnvironment_CheckedEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_CHECKEDENTRY
