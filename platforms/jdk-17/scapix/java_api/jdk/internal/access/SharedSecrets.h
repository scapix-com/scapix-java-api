// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_SHAREDSECRETS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_SHAREDSECRETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class SharedSecrets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::SharedSecrets>
{
	static constexpr fixed_string class_name = "jdk/internal/access/SharedSecrets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_SHAREDSECRETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_SHAREDSECRETS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_SHAREDSECRETS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/access/JavaAWTAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaAWTFontAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaBeansAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaIOAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaIOFilePermissionAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaIORandomAccessFileAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaLangAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaLangInvokeAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaLangModuleAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaLangRefAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaLangReflectAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaNetHttpCookieAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaNetInetAddressAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaNetURLAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaNetUriAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaNioAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaObjectInputFilterAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaObjectInputStreamReadString.h>
#include <scapix/java_api/jdk/internal/access/JavaSecurityAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaSecurityPropertiesAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaSecuritySignatureAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaSecuritySpecAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaUtilCollectionAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaUtilJarAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaUtilResourceBundleAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaUtilZipFileAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaxCryptoSealedObjectAccess.h>
#include <scapix/java_api/jdk/internal/access/JavaxCryptoSpecAccess.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::SharedSecrets : public jni::object_base<"jdk/internal/access/SharedSecrets",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::access::SharedSecrets> new_object() { return base_::new_object(); }
	static void setJavaUtilCollectionAccess(jni::ref<jdk::internal::access::JavaUtilCollectionAccess> juca) { return call_static_method<"setJavaUtilCollectionAccess", void>(juca); }
	static jni::ref<jdk::internal::access::JavaUtilCollectionAccess> getJavaUtilCollectionAccess() { return call_static_method<"getJavaUtilCollectionAccess", jni::ref<jdk::internal::access::JavaUtilCollectionAccess>>(); }
	static jni::ref<jdk::internal::access::JavaUtilJarAccess> javaUtilJarAccess() { return call_static_method<"javaUtilJarAccess", jni::ref<jdk::internal::access::JavaUtilJarAccess>>(); }
	static void setJavaUtilJarAccess(jni::ref<jdk::internal::access::JavaUtilJarAccess> access) { return call_static_method<"setJavaUtilJarAccess", void>(access); }
	static void setJavaLangAccess(jni::ref<jdk::internal::access::JavaLangAccess> jla) { return call_static_method<"setJavaLangAccess", void>(jla); }
	static jni::ref<jdk::internal::access::JavaLangAccess> getJavaLangAccess() { return call_static_method<"getJavaLangAccess", jni::ref<jdk::internal::access::JavaLangAccess>>(); }
	static void setJavaLangInvokeAccess(jni::ref<jdk::internal::access::JavaLangInvokeAccess> jlia) { return call_static_method<"setJavaLangInvokeAccess", void>(jlia); }
	static jni::ref<jdk::internal::access::JavaLangInvokeAccess> getJavaLangInvokeAccess() { return call_static_method<"getJavaLangInvokeAccess", jni::ref<jdk::internal::access::JavaLangInvokeAccess>>(); }
	static void setJavaLangModuleAccess(jni::ref<jdk::internal::access::JavaLangModuleAccess> jlrma) { return call_static_method<"setJavaLangModuleAccess", void>(jlrma); }
	static jni::ref<jdk::internal::access::JavaLangModuleAccess> getJavaLangModuleAccess() { return call_static_method<"getJavaLangModuleAccess", jni::ref<jdk::internal::access::JavaLangModuleAccess>>(); }
	static void setJavaLangRefAccess(jni::ref<jdk::internal::access::JavaLangRefAccess> jlra) { return call_static_method<"setJavaLangRefAccess", void>(jlra); }
	static jni::ref<jdk::internal::access::JavaLangRefAccess> getJavaLangRefAccess() { return call_static_method<"getJavaLangRefAccess", jni::ref<jdk::internal::access::JavaLangRefAccess>>(); }
	static void setJavaLangReflectAccess(jni::ref<jdk::internal::access::JavaLangReflectAccess> jlra) { return call_static_method<"setJavaLangReflectAccess", void>(jlra); }
	static jni::ref<jdk::internal::access::JavaLangReflectAccess> getJavaLangReflectAccess() { return call_static_method<"getJavaLangReflectAccess", jni::ref<jdk::internal::access::JavaLangReflectAccess>>(); }
	static void setJavaNetUriAccess(jni::ref<jdk::internal::access::JavaNetUriAccess> jnua) { return call_static_method<"setJavaNetUriAccess", void>(jnua); }
	static jni::ref<jdk::internal::access::JavaNetUriAccess> getJavaNetUriAccess() { return call_static_method<"getJavaNetUriAccess", jni::ref<jdk::internal::access::JavaNetUriAccess>>(); }
	static void setJavaNetURLAccess(jni::ref<jdk::internal::access::JavaNetURLAccess> jnua) { return call_static_method<"setJavaNetURLAccess", void>(jnua); }
	static jni::ref<jdk::internal::access::JavaNetURLAccess> getJavaNetURLAccess() { return call_static_method<"getJavaNetURLAccess", jni::ref<jdk::internal::access::JavaNetURLAccess>>(); }
	static void setJavaNetInetAddressAccess(jni::ref<jdk::internal::access::JavaNetInetAddressAccess> jna) { return call_static_method<"setJavaNetInetAddressAccess", void>(jna); }
	static jni::ref<jdk::internal::access::JavaNetInetAddressAccess> getJavaNetInetAddressAccess() { return call_static_method<"getJavaNetInetAddressAccess", jni::ref<jdk::internal::access::JavaNetInetAddressAccess>>(); }
	static void setJavaNetHttpCookieAccess(jni::ref<jdk::internal::access::JavaNetHttpCookieAccess> a) { return call_static_method<"setJavaNetHttpCookieAccess", void>(a); }
	static jni::ref<jdk::internal::access::JavaNetHttpCookieAccess> getJavaNetHttpCookieAccess() { return call_static_method<"getJavaNetHttpCookieAccess", jni::ref<jdk::internal::access::JavaNetHttpCookieAccess>>(); }
	static void setJavaNioAccess(jni::ref<jdk::internal::access::JavaNioAccess> jna) { return call_static_method<"setJavaNioAccess", void>(jna); }
	static jni::ref<jdk::internal::access::JavaNioAccess> getJavaNioAccess() { return call_static_method<"getJavaNioAccess", jni::ref<jdk::internal::access::JavaNioAccess>>(); }
	static void setJavaIOAccess(jni::ref<jdk::internal::access::JavaIOAccess> jia) { return call_static_method<"setJavaIOAccess", void>(jia); }
	static jni::ref<jdk::internal::access::JavaIOAccess> getJavaIOAccess() { return call_static_method<"getJavaIOAccess", jni::ref<jdk::internal::access::JavaIOAccess>>(); }
	static void setJavaIOFileDescriptorAccess(jni::ref<jdk::internal::access::JavaIOFileDescriptorAccess> jiofda) { return call_static_method<"setJavaIOFileDescriptorAccess", void>(jiofda); }
	static jni::ref<jdk::internal::access::JavaIOFilePermissionAccess> getJavaIOFilePermissionAccess() { return call_static_method<"getJavaIOFilePermissionAccess", jni::ref<jdk::internal::access::JavaIOFilePermissionAccess>>(); }
	static void setJavaIOFilePermissionAccess(jni::ref<jdk::internal::access::JavaIOFilePermissionAccess> jiofpa) { return call_static_method<"setJavaIOFilePermissionAccess", void>(jiofpa); }
	static jni::ref<jdk::internal::access::JavaIOFileDescriptorAccess> getJavaIOFileDescriptorAccess() { return call_static_method<"getJavaIOFileDescriptorAccess", jni::ref<jdk::internal::access::JavaIOFileDescriptorAccess>>(); }
	static void setJavaSecurityAccess(jni::ref<jdk::internal::access::JavaSecurityAccess> jsa) { return call_static_method<"setJavaSecurityAccess", void>(jsa); }
	static jni::ref<jdk::internal::access::JavaSecurityAccess> getJavaSecurityAccess() { return call_static_method<"getJavaSecurityAccess", jni::ref<jdk::internal::access::JavaSecurityAccess>>(); }
	static void setJavaSecurityPropertiesAccess(jni::ref<jdk::internal::access::JavaSecurityPropertiesAccess> jspa) { return call_static_method<"setJavaSecurityPropertiesAccess", void>(jspa); }
	static jni::ref<jdk::internal::access::JavaSecurityPropertiesAccess> getJavaSecurityPropertiesAccess() { return call_static_method<"getJavaSecurityPropertiesAccess", jni::ref<jdk::internal::access::JavaSecurityPropertiesAccess>>(); }
	static jni::ref<jdk::internal::access::JavaUtilZipFileAccess> getJavaUtilZipFileAccess() { return call_static_method<"getJavaUtilZipFileAccess", jni::ref<jdk::internal::access::JavaUtilZipFileAccess>>(); }
	static void setJavaUtilZipFileAccess(jni::ref<jdk::internal::access::JavaUtilZipFileAccess> access) { return call_static_method<"setJavaUtilZipFileAccess", void>(access); }
	static void setJavaAWTAccess(jni::ref<jdk::internal::access::JavaAWTAccess> jaa) { return call_static_method<"setJavaAWTAccess", void>(jaa); }
	static jni::ref<jdk::internal::access::JavaAWTAccess> getJavaAWTAccess() { return call_static_method<"getJavaAWTAccess", jni::ref<jdk::internal::access::JavaAWTAccess>>(); }
	static void setJavaAWTFontAccess(jni::ref<jdk::internal::access::JavaAWTFontAccess> jafa) { return call_static_method<"setJavaAWTFontAccess", void>(jafa); }
	static jni::ref<jdk::internal::access::JavaAWTFontAccess> getJavaAWTFontAccess() { return call_static_method<"getJavaAWTFontAccess", jni::ref<jdk::internal::access::JavaAWTFontAccess>>(); }
	static jni::ref<jdk::internal::access::JavaBeansAccess> getJavaBeansAccess() { return call_static_method<"getJavaBeansAccess", jni::ref<jdk::internal::access::JavaBeansAccess>>(); }
	static void setJavaBeansAccess(jni::ref<jdk::internal::access::JavaBeansAccess> access) { return call_static_method<"setJavaBeansAccess", void>(access); }
	static jni::ref<jdk::internal::access::JavaUtilResourceBundleAccess> getJavaUtilResourceBundleAccess() { return call_static_method<"getJavaUtilResourceBundleAccess", jni::ref<jdk::internal::access::JavaUtilResourceBundleAccess>>(); }
	static void setJavaUtilResourceBundleAccess(jni::ref<jdk::internal::access::JavaUtilResourceBundleAccess> access) { return call_static_method<"setJavaUtilResourceBundleAccess", void>(access); }
	static jni::ref<jdk::internal::access::JavaObjectInputStreamReadString> getJavaObjectInputStreamReadString() { return call_static_method<"getJavaObjectInputStreamReadString", jni::ref<jdk::internal::access::JavaObjectInputStreamReadString>>(); }
	static void setJavaObjectInputStreamReadString(jni::ref<jdk::internal::access::JavaObjectInputStreamReadString> access) { return call_static_method<"setJavaObjectInputStreamReadString", void>(access); }
	static jni::ref<jdk::internal::access::JavaObjectInputStreamAccess> getJavaObjectInputStreamAccess() { return call_static_method<"getJavaObjectInputStreamAccess", jni::ref<jdk::internal::access::JavaObjectInputStreamAccess>>(); }
	static void setJavaObjectInputStreamAccess(jni::ref<jdk::internal::access::JavaObjectInputStreamAccess> access) { return call_static_method<"setJavaObjectInputStreamAccess", void>(access); }
	static jni::ref<jdk::internal::access::JavaObjectInputFilterAccess> getJavaObjectInputFilterAccess() { return call_static_method<"getJavaObjectInputFilterAccess", jni::ref<jdk::internal::access::JavaObjectInputFilterAccess>>(); }
	static void setJavaObjectInputFilterAccess(jni::ref<jdk::internal::access::JavaObjectInputFilterAccess> access) { return call_static_method<"setJavaObjectInputFilterAccess", void>(access); }
	static void setJavaIORandomAccessFileAccess(jni::ref<jdk::internal::access::JavaIORandomAccessFileAccess> jirafa) { return call_static_method<"setJavaIORandomAccessFileAccess", void>(jirafa); }
	static jni::ref<jdk::internal::access::JavaIORandomAccessFileAccess> getJavaIORandomAccessFileAccess() { return call_static_method<"getJavaIORandomAccessFileAccess", jni::ref<jdk::internal::access::JavaIORandomAccessFileAccess>>(); }
	static void setJavaSecuritySignatureAccess(jni::ref<jdk::internal::access::JavaSecuritySignatureAccess> jssa) { return call_static_method<"setJavaSecuritySignatureAccess", void>(jssa); }
	static jni::ref<jdk::internal::access::JavaSecuritySignatureAccess> getJavaSecuritySignatureAccess() { return call_static_method<"getJavaSecuritySignatureAccess", jni::ref<jdk::internal::access::JavaSecuritySignatureAccess>>(); }
	static void setJavaSecuritySpecAccess(jni::ref<jdk::internal::access::JavaSecuritySpecAccess> jssa) { return call_static_method<"setJavaSecuritySpecAccess", void>(jssa); }
	static jni::ref<jdk::internal::access::JavaSecuritySpecAccess> getJavaSecuritySpecAccess() { return call_static_method<"getJavaSecuritySpecAccess", jni::ref<jdk::internal::access::JavaSecuritySpecAccess>>(); }
	static void setJavaxCryptoSpecAccess(jni::ref<jdk::internal::access::JavaxCryptoSpecAccess> jcsa) { return call_static_method<"setJavaxCryptoSpecAccess", void>(jcsa); }
	static jni::ref<jdk::internal::access::JavaxCryptoSpecAccess> getJavaxCryptoSpecAccess() { return call_static_method<"getJavaxCryptoSpecAccess", jni::ref<jdk::internal::access::JavaxCryptoSpecAccess>>(); }
	static void setJavaxCryptoSealedObjectAccess(jni::ref<jdk::internal::access::JavaxCryptoSealedObjectAccess> jcsoa) { return call_static_method<"setJavaxCryptoSealedObjectAccess", void>(jcsoa); }
	static jni::ref<jdk::internal::access::JavaxCryptoSealedObjectAccess> getJavaxCryptoSealedObjectAccess() { return call_static_method<"getJavaxCryptoSealedObjectAccess", jni::ref<jdk::internal::access::JavaxCryptoSealedObjectAccess>>(); }

protected:

	SharedSecrets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_SHAREDSECRETS
