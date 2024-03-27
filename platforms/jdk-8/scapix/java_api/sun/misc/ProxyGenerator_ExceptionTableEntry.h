// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_EXCEPTIONTABLEENTRY_FWD
#define SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_EXCEPTIONTABLEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class ProxyGenerator_ExceptionTableEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::ProxyGenerator_ExceptionTableEntry>
{
	static constexpr fixed_string class_name = "sun/misc/ProxyGenerator$ExceptionTableEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_EXCEPTIONTABLEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_EXCEPTIONTABLEENTRY)
#define SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_EXCEPTIONTABLEENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::ProxyGenerator_ExceptionTableEntry : public jni::object_base<"sun/misc/ProxyGenerator$ExceptionTableEntry",
	java::lang::Object>
{
public:

	jshort startPc() { return get_field<"startPc", jshort>(); }
	void startPc(jshort v) { set_field<"startPc", jshort>(v); }
	jshort endPc() { return get_field<"endPc", jshort>(); }
	void endPc(jshort v) { set_field<"endPc", jshort>(v); }
	jshort handlerPc() { return get_field<"handlerPc", jshort>(); }
	void handlerPc(jshort v) { set_field<"handlerPc", jshort>(v); }
	jshort catchType() { return get_field<"catchType", jshort>(); }
	void catchType(jshort v) { set_field<"catchType", jshort>(v); }

	static jni::ref<sun::misc::ProxyGenerator_ExceptionTableEntry> new_object(jshort p1, jshort p2, jshort p3, jshort p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	ProxyGenerator_ExceptionTableEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_EXCEPTIONTABLEENTRY