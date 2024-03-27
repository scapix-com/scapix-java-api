// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/ftp/FtpClientProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_FTP_IMPL_DEFAULTFTPCLIENTPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_NET_FTP_IMPL_DEFAULTFTPCLIENTPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::ftp::impl { class DefaultFtpClientProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ftp::impl::DefaultFtpClientProvider>
{
	static constexpr fixed_string class_name = "sun/net/ftp/impl/DefaultFtpClientProvider";
	using base_classes = std::tuple<scapix::java_api::sun::net::ftp::FtpClientProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_IMPL_DEFAULTFTPCLIENTPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_FTP_IMPL_DEFAULTFTPCLIENTPROVIDER)
#define SCAPIX_JAVA_API_SUN_NET_FTP_IMPL_DEFAULTFTPCLIENTPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/net/ftp/FtpClient.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ftp::impl::DefaultFtpClientProvider : public jni::object_base<"sun/net/ftp/impl/DefaultFtpClientProvider",
	sun::net::ftp::FtpClientProvider>
{
public:

	static jni::ref<sun::net::ftp::impl::DefaultFtpClientProvider> new_object() { return base_::new_object(); }
	jni::ref<sun::net::ftp::FtpClient> createFtpClient() { return call_method<"createFtpClient", jni::ref<sun::net::ftp::FtpClient>>(); }

protected:

	DefaultFtpClientProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_IMPL_DEFAULTFTPCLIENTPROVIDER