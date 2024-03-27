// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AttributeValue.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_JOBATTRIBUTES_DESTINATIONTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_JOBATTRIBUTES_DESTINATIONTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class JobAttributes_DestinationType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::JobAttributes_DestinationType>
{
	static constexpr fixed_string class_name = "java/awt/JobAttributes$DestinationType";
	using base_classes = std::tuple<scapix::java_api::java::awt::AttributeValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_JOBATTRIBUTES_DESTINATIONTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_JOBATTRIBUTES_DESTINATIONTYPE)
#define SCAPIX_JAVA_API_JAVA_AWT_JOBATTRIBUTES_DESTINATIONTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::JobAttributes_DestinationType : public jni::object_base<"java/awt/JobAttributes$DestinationType",
	java::awt::AttributeValue>
{
public:

	static jni::ref<java::awt::JobAttributes_DestinationType> FILE() { return get_static_field<"FILE", jni::ref<java::awt::JobAttributes_DestinationType>>(); }
	static jni::ref<java::awt::JobAttributes_DestinationType> PRINTER() { return get_static_field<"PRINTER", jni::ref<java::awt::JobAttributes_DestinationType>>(); }


protected:

	JobAttributes_DestinationType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_JOBATTRIBUTES_DESTINATIONTYPE
