// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/Instruction_Switch.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_TABLESWITCH_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_TABLESWITCH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Instruction_TableSwitch; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Instruction_TableSwitch>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Instruction$TableSwitch";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::Instruction_Switch>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_TABLESWITCH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_TABLESWITCH)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_TABLESWITCH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Instruction_TableSwitch : public jni::object_base<"com/sun/java/util/jar/pack/Instruction$TableSwitch",
	com::sun::java::util::jar::pack::Instruction_Switch>
{
public:

	jint getLowCase() { return call_method<"getLowCase", jint>(); }
	jint getHighCase() { return call_method<"getHighCase", jint>(); }
	jint getCaseCount() { return call_method<"getCaseCount", jint>(); }
	jint getCaseValue(jint p1) { return call_method<"getCaseValue", jint>(p1); }
	jint getCaseLabel(jint p1) { return call_method<"getCaseLabel", jint>(p1); }
	void setLowCase(jint p1) { return call_method<"setLowCase", void>(p1); }
	void setHighCase(jint p1) { return call_method<"setHighCase", void>(p1); }
	void setCaseLabel(jint p1, jint p2) { return call_method<"setCaseLabel", void>(p1, p2); }
	void setCaseCount(jint p1) { return call_method<"setCaseCount", void>(p1); }
	void setCaseValue(jint p1, jint p2) { return call_method<"setCaseValue", void>(p1, p2); }

protected:

	Instruction_TableSwitch(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_TABLESWITCH