// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARKANDRESETHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARKANDRESETHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class MarkAndResetHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::MarkAndResetHandler>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/MarkAndResetHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARKANDRESETHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARKANDRESETHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARKANDRESETHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/encoding/ByteBufferWithInfo.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/RestorableInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::encoding::MarkAndResetHandler : public jni::object_base<"com/sun/corba/se/impl/encoding/MarkAndResetHandler",
	java::lang::Object>
{
public:

	void mark(jni::ref<com::sun::corba::se::impl::encoding::RestorableInputStream> p1) { return call_method<"mark", void>(p1); }
	void fragmentationOccured(jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> p1) { return call_method<"fragmentationOccured", void>(p1); }
	void reset() { return call_method<"reset", void>(); }

protected:

	MarkAndResetHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARKANDRESETHANDLER
