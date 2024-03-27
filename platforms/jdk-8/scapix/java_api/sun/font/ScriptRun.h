// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUN_FWD
#define SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class ScriptRun; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::ScriptRun>
{
	static constexpr fixed_string class_name = "sun/font/ScriptRun";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUN)
#define SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::ScriptRun : public jni::object_base<"sun/font/ScriptRun",
	java::lang::Object>
{
public:

	static jni::ref<sun::font::ScriptRun> new_object() { return base_::new_object(); }
	static jni::ref<sun::font::ScriptRun> new_object(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	void init(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"init", void>(p1, p2, p3); }
	jint getScriptStart() { return call_method<"getScriptStart", jint>(); }
	jint getScriptLimit() { return call_method<"getScriptLimit", jint>(); }
	jint getScriptCode() { return call_method<"getScriptCode", jint>(); }
	jboolean next() { return call_method<"next", jboolean>(); }

protected:

	ScriptRun(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUN
