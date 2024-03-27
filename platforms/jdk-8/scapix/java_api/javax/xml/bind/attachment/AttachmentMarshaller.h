// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_ATTACHMENT_ATTACHMENTMARSHALLER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ATTACHMENT_ATTACHMENTMARSHALLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::attachment { class AttachmentMarshaller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::attachment::AttachmentMarshaller>
{
	static constexpr fixed_string class_name = "javax/xml/bind/attachment/AttachmentMarshaller";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ATTACHMENT_ATTACHMENTMARSHALLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_ATTACHMENT_ATTACHMENTMARSHALLER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ATTACHMENT_ATTACHMENTMARSHALLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/activation/DataHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::attachment::AttachmentMarshaller : public jni::object_base<"javax/xml/bind/attachment/AttachmentMarshaller",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::bind::attachment::AttachmentMarshaller> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> addMtomAttachment(jni::ref<javax::activation::DataHandler> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"addMtomAttachment", jni::ref<java::lang::String>>(p1, p2, p3); }
	jni::ref<java::lang::String> addMtomAttachment(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5, jni::ref<java::lang::String> p6) { return call_method<"addMtomAttachment", jni::ref<java::lang::String>>(p1, p2, p3, p4, p5, p6); }
	jboolean isXOPPackage() { return call_method<"isXOPPackage", jboolean>(); }
	jni::ref<java::lang::String> addSwaRefAttachment(jni::ref<javax::activation::DataHandler> p1) { return call_method<"addSwaRefAttachment", jni::ref<java::lang::String>>(p1); }

protected:

	AttachmentMarshaller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ATTACHMENT_ATTACHMENTMARSHALLER