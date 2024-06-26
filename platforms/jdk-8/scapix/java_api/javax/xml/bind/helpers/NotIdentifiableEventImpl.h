// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/bind/helpers/ValidationEventImpl.h>
#include <scapix/java_api/javax/xml/bind/NotIdentifiableEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_NOTIDENTIFIABLEEVENTIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_NOTIDENTIFIABLEEVENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::helpers { class NotIdentifiableEventImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::helpers::NotIdentifiableEventImpl>
{
	static constexpr fixed_string class_name = "javax/xml/bind/helpers/NotIdentifiableEventImpl";
	using base_classes = std::tuple<scapix::java_api::javax::xml::bind::helpers::ValidationEventImpl, scapix::java_api::javax::xml::bind::NotIdentifiableEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_NOTIDENTIFIABLEEVENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_NOTIDENTIFIABLEEVENTIMPL)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_NOTIDENTIFIABLEEVENTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/javax/xml/bind/ValidationEventLocator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::helpers::NotIdentifiableEventImpl : public jni::object_base<"javax/xml/bind/helpers/NotIdentifiableEventImpl",
	javax::xml::bind::helpers::ValidationEventImpl,
	javax::xml::bind::NotIdentifiableEvent>
{
public:

	static jni::ref<javax::xml::bind::helpers::NotIdentifiableEventImpl> new_object(jint p1, jni::ref<java::lang::String> p2, jni::ref<javax::xml::bind::ValidationEventLocator> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::xml::bind::helpers::NotIdentifiableEventImpl> new_object(jint p1, jni::ref<java::lang::String> p2, jni::ref<javax::xml::bind::ValidationEventLocator> p3, jni::ref<java::lang::Throwable> p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	NotIdentifiableEventImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_NOTIDENTIFIABLEEVENTIMPL
