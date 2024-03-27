// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/javax/management/QueryExp.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OBJECTNAME_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OBJECTNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class ObjectName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::ObjectName>
{
	static constexpr fixed_string class_name = "javax/management/ObjectName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable, scapix::java_api::javax::management::QueryExp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OBJECTNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OBJECTNAME)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OBJECTNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::ObjectName : public jni::object_base<"javax/management/ObjectName",
	java::lang::Object,
	java::lang::Comparable,
	javax::management::QueryExp>
{
public:

	static jni::ref<javax::management::ObjectName> WILDCARD() { return get_static_field<"WILDCARD", jni::ref<javax::management::ObjectName>>(); }

	static jni::ref<javax::management::ObjectName> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<javax::management::ObjectName>>(p1); }
	static jni::ref<javax::management::ObjectName> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getInstance", jni::ref<javax::management::ObjectName>>(p1, p2, p3); }
	static jni::ref<javax::management::ObjectName> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::util::Hashtable> p2) { return call_static_method<"getInstance", jni::ref<javax::management::ObjectName>>(p1, p2); }
	static jni::ref<javax::management::ObjectName> getInstance(jni::ref<javax::management::ObjectName> p1) { return call_static_method<"getInstance", jni::ref<javax::management::ObjectName>>(p1); }
	static jni::ref<javax::management::ObjectName> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::management::ObjectName> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::management::ObjectName> new_object(jni::ref<java::lang::String> p1, jni::ref<java::util::Hashtable> p2) { return base_::new_object(p1, p2); }
	jboolean isPattern() { return call_method<"isPattern", jboolean>(); }
	jboolean isDomainPattern() { return call_method<"isDomainPattern", jboolean>(); }
	jboolean isPropertyPattern() { return call_method<"isPropertyPattern", jboolean>(); }
	jboolean isPropertyListPattern() { return call_method<"isPropertyListPattern", jboolean>(); }
	jboolean isPropertyValuePattern() { return call_method<"isPropertyValuePattern", jboolean>(); }
	jboolean isPropertyValuePattern(jni::ref<java::lang::String> p1) { return call_method<"isPropertyValuePattern", jboolean>(p1); }
	jni::ref<java::lang::String> getCanonicalName() { return call_method<"getCanonicalName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDomain() { return call_method<"getDomain", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getKeyProperty(jni::ref<java::lang::String> p1) { return call_method<"getKeyProperty", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Hashtable> getKeyPropertyList() { return call_method<"getKeyPropertyList", jni::ref<java::util::Hashtable>>(); }
	jni::ref<java::lang::String> getKeyPropertyListString() { return call_method<"getKeyPropertyListString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCanonicalKeyPropertyListString() { return call_method<"getCanonicalKeyPropertyListString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<java::lang::String> quote(jni::ref<java::lang::String> p1) { return call_static_method<"quote", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> unquote(jni::ref<java::lang::String> p1) { return call_static_method<"unquote", jni::ref<java::lang::String>>(p1); }
	jboolean apply(jni::ref<javax::management::ObjectName> p1) { return call_method<"apply", jboolean>(p1); }
	void setMBeanServer(jni::ref<javax::management::MBeanServer> p1) { return call_method<"setMBeanServer", void>(p1); }
	jint compareTo(jni::ref<javax::management::ObjectName> p1) { return call_method<"compareTo", jint>(p1); }

protected:

	ObjectName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OBJECTNAME