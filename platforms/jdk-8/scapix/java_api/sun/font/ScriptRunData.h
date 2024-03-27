// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUNDATA_FWD
#define SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUNDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class ScriptRunData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::ScriptRunData>
{
	static constexpr fixed_string class_name = "sun/font/ScriptRunData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUNDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUNDATA)
#define SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUNDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::ScriptRunData : public jni::object_base<"sun/font/ScriptRunData",
	java::lang::Object>
{
public:

	static jint getScript(jint p1) { return call_static_method<"getScript", jint>(p1); }

protected:

	ScriptRunData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SCRIPTRUNDATA
