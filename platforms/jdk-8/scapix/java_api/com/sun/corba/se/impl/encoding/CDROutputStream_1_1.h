// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/encoding/CDROutputStream_1_0.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTSTREAM_1_1_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTSTREAM_1_1_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class CDROutputStream_1_1; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::CDROutputStream_1_1>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/CDROutputStream_1_1";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::encoding::CDROutputStream_1_0>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTSTREAM_1_1_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTSTREAM_1_1)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTSTREAM_1_1

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::encoding::CDROutputStream_1_1 : public jni::object_base<"com/sun/corba/se/impl/encoding/CDROutputStream_1_1",
	com::sun::corba::se::impl::encoding::CDROutputStream_1_0>
{
public:

	static jni::ref<com::sun::corba::se::impl::encoding::CDROutputStream_1_1> new_object() { return base_::new_object(); }
	jint get_offset() { return call_method<"get_offset", jint>(); }
	jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> getGIOPVersion() { return call_method<"getGIOPVersion", jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion>>(); }
	void write_wchar(jchar p1) { return call_method<"write_wchar", void>(p1); }
	void write_wstring(jni::ref<java::lang::String> p1) { return call_method<"write_wstring", void>(p1); }

protected:

	CDROutputStream_1_1(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDROUTPUTSTREAM_1_1
