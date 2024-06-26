// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/nio/sctp/Notification.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ASSOCIATIONCHANGENOTIFICATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ASSOCIATIONCHANGENOTIFICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::nio::sctp { class AssociationChangeNotification; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::nio::sctp::AssociationChangeNotification>
{
	static constexpr fixed_string class_name = "com/sun/nio/sctp/AssociationChangeNotification";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::nio::sctp::Notification>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ASSOCIATIONCHANGENOTIFICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ASSOCIATIONCHANGENOTIFICATION)
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ASSOCIATIONCHANGENOTIFICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/nio/sctp/Association.h>
#include <scapix/java_api/com/sun/nio/sctp/AssociationChangeNotification_AssocChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::nio::sctp::AssociationChangeNotification : public jni::object_base<"com/sun/nio/sctp/AssociationChangeNotification",
	java::lang::Object,
	com::sun::nio::sctp::Notification>
{
public:

	using AssocChangeEvent = AssociationChangeNotification_AssocChangeEvent;

	jni::ref<com::sun::nio::sctp::Association> association() { return call_method<"association", jni::ref<com::sun::nio::sctp::Association>>(); }
	jni::ref<com::sun::nio::sctp::AssociationChangeNotification_AssocChangeEvent> event() { return call_method<"event", jni::ref<com::sun::nio::sctp::AssociationChangeNotification_AssocChangeEvent>>(); }

protected:

	AssociationChangeNotification(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ASSOCIATIONCHANGENOTIFICATION
