// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_ATTRIBUTES_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_ATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::directory { class Attributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::directory::Attributes>
{
	static constexpr fixed_string class_name = "javax/naming/directory/Attributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_ATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_ATTRIBUTES)
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_ATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>
#include <scapix/java_api/javax/naming/directory/Attribute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::directory::Attributes : public jni::object_base<"javax/naming/directory/Attributes",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	jboolean isCaseIgnored() { return call_method<"isCaseIgnored", jboolean>(); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<javax::naming::directory::Attribute> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<javax::naming::directory::Attribute>>(p1); }
	jni::ref<javax::naming::NamingEnumeration> getAll() { return call_method<"getAll", jni::ref<javax::naming::NamingEnumeration>>(); }
	jni::ref<javax::naming::NamingEnumeration> getIDs() { return call_method<"getIDs", jni::ref<javax::naming::NamingEnumeration>>(); }
	jni::ref<javax::naming::directory::Attribute> put(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<javax::naming::directory::Attribute>>(p1, p2); }
	jni::ref<javax::naming::directory::Attribute> put(jni::ref<javax::naming::directory::Attribute> p1) { return call_method<"put", jni::ref<javax::naming::directory::Attribute>>(p1); }
	jni::ref<javax::naming::directory::Attribute> remove(jni::ref<java::lang::String> p1) { return call_method<"remove", jni::ref<javax::naming::directory::Attribute>>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	Attributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_ATTRIBUTES
