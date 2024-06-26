// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ANNOTATION_RESOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_ANNOTATION_RESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::annotation { class Resource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::annotation::Resource>
{
	static constexpr fixed_string class_name = "javax/annotation/Resource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ANNOTATION_RESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ANNOTATION_RESOURCE)
#define SCAPIX_JAVA_API_JAVAX_ANNOTATION_RESOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/annotation/Resource_AuthenticationType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::annotation::Resource : public jni::object_base<"javax/annotation/Resource",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	using AuthenticationType = Resource_AuthenticationType;

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> lookup() { return call_method<"lookup", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> type() { return call_method<"type", jni::ref<java::lang::Class>>(); }
	jni::ref<javax::annotation::Resource_AuthenticationType> authenticationType() { return call_method<"authenticationType", jni::ref<javax::annotation::Resource_AuthenticationType>>(); }
	jboolean shareable() { return call_method<"shareable", jboolean>(); }
	jni::ref<java::lang::String> mappedName() { return call_method<"mappedName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> description() { return call_method<"description", jni::ref<java::lang::String>>(); }

protected:

	Resource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ANNOTATION_RESOURCE
