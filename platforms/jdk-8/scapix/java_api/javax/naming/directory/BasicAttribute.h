// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/directory/Attribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::directory { class BasicAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::directory::BasicAttribute>
{
	static constexpr fixed_string class_name = "javax/naming/directory/BasicAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::directory::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTE)
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>
#include <scapix/java_api/javax/naming/directory/DirContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::directory::BasicAttribute : public jni::object_base<"javax/naming/directory/BasicAttribute",
	java::lang::Object,
	javax::naming::directory::Attribute>
{
public:

	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<javax::naming::directory::BasicAttribute> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::naming::directory::BasicAttribute> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::naming::directory::BasicAttribute> new_object(jni::ref<java::lang::String> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::naming::directory::BasicAttribute> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> getAll() { return call_method<"getAll", jni::ref<javax::naming::NamingEnumeration>>(); }
	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jboolean isOrdered() { return call_method<"isOrdered", jboolean>(); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> remove(jint p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	void add(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"add", void>(p1, p2); }
	jni::ref<java::lang::Object> set(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"set", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<javax::naming::directory::DirContext> getAttributeSyntaxDefinition() { return call_method<"getAttributeSyntaxDefinition", jni::ref<javax::naming::directory::DirContext>>(); }
	jni::ref<javax::naming::directory::DirContext> getAttributeDefinition() { return call_method<"getAttributeDefinition", jni::ref<javax::naming::directory::DirContext>>(); }

protected:

	BasicAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTE
