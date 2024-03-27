// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_REFERENCE_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_REFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class Reference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::Reference>
{
	static constexpr fixed_string class_name = "javax/naming/Reference";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_REFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_REFERENCE)
#define SCAPIX_JAVA_API_JAVAX_NAMING_REFERENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/javax/naming/RefAddr.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::Reference : public jni::object_base<"javax/naming/Reference",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<javax::naming::Reference> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::naming::Reference> new_object(jni::ref<java::lang::String> p1, jni::ref<javax::naming::RefAddr> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::naming::Reference> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::naming::Reference> new_object(jni::ref<java::lang::String> p1, jni::ref<javax::naming::RefAddr> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFactoryClassName() { return call_method<"getFactoryClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFactoryClassLocation() { return call_method<"getFactoryClassLocation", jni::ref<java::lang::String>>(); }
	jni::ref<javax::naming::RefAddr> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<javax::naming::RefAddr>>(p1); }
	jni::ref<javax::naming::RefAddr> get(jint p1) { return call_method<"get", jni::ref<javax::naming::RefAddr>>(p1); }
	jni::ref<java::util::Enumeration> getAll() { return call_method<"getAll", jni::ref<java::util::Enumeration>>(); }
	jint size() { return call_method<"size", jint>(); }
	void add(jni::ref<javax::naming::RefAddr> p1) { return call_method<"add", void>(p1); }
	void add(jint p1, jni::ref<javax::naming::RefAddr> p2) { return call_method<"add", void>(p1, p2); }
	jni::ref<java::lang::Object> remove(jint p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	Reference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_REFERENCE