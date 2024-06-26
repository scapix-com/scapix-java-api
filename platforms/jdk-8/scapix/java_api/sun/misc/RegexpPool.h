// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_REGEXPPOOL_FWD
#define SCAPIX_JAVA_API_SUN_MISC_REGEXPPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class RegexpPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::RegexpPool>
{
	static constexpr fixed_string class_name = "sun/misc/RegexpPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXPPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_REGEXPPOOL)
#define SCAPIX_JAVA_API_SUN_MISC_REGEXPPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::RegexpPool : public jni::object_base<"sun/misc/RegexpPool",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::RegexpPool> new_object() { return base_::new_object(); }
	void add(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"add", void>(p1, p2); }
	void replace(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"replace", void>(p1, p2); }
	jni::ref<java::lang::Object> delete_(jni::ref<java::lang::String> p1) { return call_method<"delete", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> match(jni::ref<java::lang::String> p1) { return call_method<"match", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> matchNext(jni::ref<java::lang::String> p1) { return call_method<"matchNext", jni::ref<java::lang::Object>>(p1); }
	void reset() { return call_method<"reset", void>(); }
	void print(jni::ref<java::io::PrintStream> p1) { return call_method<"print", void>(p1); }

protected:

	RegexpPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXPPOOL
