// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/NameClassPair.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_BINDING_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_BINDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class Binding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::Binding>
{
	static constexpr fixed_string class_name = "javax/naming/Binding";
	using base_classes = std::tuple<scapix::java_api::javax::naming::NameClassPair>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_BINDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_BINDING)
#define SCAPIX_JAVA_API_JAVAX_NAMING_BINDING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::Binding : public jni::object_base<"javax/naming/Binding",
	javax::naming::NameClassPair>
{
public:

	static jni::ref<javax::naming::Binding> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::naming::Binding> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::naming::Binding> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Object> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::naming::Binding> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Object> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getObject() { return call_method<"getObject", jni::ref<java::lang::Object>>(); }
	void setObject(jni::ref<java::lang::Object> p1) { return call_method<"setObject", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Binding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_BINDING