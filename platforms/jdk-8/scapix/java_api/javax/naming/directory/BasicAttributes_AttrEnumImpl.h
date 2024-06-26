// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTES_ATTRENUMIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTES_ATTRENUMIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::directory { class BasicAttributes_AttrEnumImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::directory::BasicAttributes_AttrEnumImpl>
{
	static constexpr fixed_string class_name = "javax/naming/directory/BasicAttributes$AttrEnumImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::NamingEnumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTES_ATTRENUMIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTES_ATTRENUMIMPL)
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTES_ATTRENUMIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/naming/directory/Attribute.h>
#include <scapix/java_api/javax/naming/directory/BasicAttributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::naming::directory::BasicAttributes_AttrEnumImpl : public jni::object_base<"javax/naming/directory/BasicAttributes$AttrEnumImpl",
	java::lang::Object,
	javax::naming::NamingEnumeration>
{
public:

	static jni::ref<javax::naming::directory::BasicAttributes_AttrEnumImpl> new_object(jni::ref<javax::naming::directory::BasicAttributes> p1) { return base_::new_object(p1); }
	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<javax::naming::directory::Attribute> nextElement() { return call_method<"nextElement", jni::ref<javax::naming::directory::Attribute>>(); }
	jboolean hasMore() { return call_method<"hasMore", jboolean>(); }
	jni::ref<javax::naming::directory::Attribute> next() { return call_method<"next", jni::ref<javax::naming::directory::Attribute>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	BasicAttributes_AttrEnumImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_BASICATTRIBUTES_ATTRENUMIMPL
