// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRENTRY_FWD
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::ftp { class FtpDirEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ftp::FtpDirEntry>
{
	static constexpr fixed_string class_name = "sun/net/ftp/FtpDirEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRENTRY)
#define SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/sun/net/ftp/FtpDirEntry_Permission.h>
#include <scapix/java_api/sun/net/ftp/FtpDirEntry_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ftp::FtpDirEntry : public jni::object_base<"sun/net/ftp/FtpDirEntry",
	java::lang::Object>
{
public:

	using Type = FtpDirEntry_Type;
	using Permission = FtpDirEntry_Permission;

	static jni::ref<sun::net::ftp::FtpDirEntry> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUser() { return call_method<"getUser", jni::ref<java::lang::String>>(); }
	jni::ref<sun::net::ftp::FtpDirEntry> setUser(jni::ref<java::lang::String> p1) { return call_method<"setUser", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }
	jni::ref<java::lang::String> getGroup() { return call_method<"getGroup", jni::ref<java::lang::String>>(); }
	jni::ref<sun::net::ftp::FtpDirEntry> setGroup(jni::ref<java::lang::String> p1) { return call_method<"setGroup", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }
	jlong getSize() { return call_method<"getSize", jlong>(); }
	jni::ref<sun::net::ftp::FtpDirEntry> setSize(jlong p1) { return call_method<"setSize", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }
	jni::ref<sun::net::ftp::FtpDirEntry_Type> getType() { return call_method<"getType", jni::ref<sun::net::ftp::FtpDirEntry_Type>>(); }
	jni::ref<sun::net::ftp::FtpDirEntry> setType(jni::ref<sun::net::ftp::FtpDirEntry_Type> p1) { return call_method<"setType", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }
	jni::ref<java::util::Date> getLastModified() { return call_method<"getLastModified", jni::ref<java::util::Date>>(); }
	jni::ref<sun::net::ftp::FtpDirEntry> setLastModified(jni::ref<java::util::Date> p1) { return call_method<"setLastModified", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }
	jboolean canRead(jni::ref<sun::net::ftp::FtpDirEntry_Permission> p1) { return call_method<"canRead", jboolean>(p1); }
	jboolean canWrite(jni::ref<sun::net::ftp::FtpDirEntry_Permission> p1) { return call_method<"canWrite", jboolean>(p1); }
	jboolean canExexcute(jni::ref<sun::net::ftp::FtpDirEntry_Permission> p1) { return call_method<"canExexcute", jboolean>(p1); }
	jni::ref<sun::net::ftp::FtpDirEntry> setPermissions(jni::ref<jni::array<jni::array<jboolean>>> p1) { return call_method<"setPermissions", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }
	jni::ref<sun::net::ftp::FtpDirEntry> addFact(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addFact", jni::ref<sun::net::ftp::FtpDirEntry>>(p1, p2); }
	jni::ref<java::lang::String> getFact(jni::ref<java::lang::String> p1) { return call_method<"getFact", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Date> getCreated() { return call_method<"getCreated", jni::ref<java::util::Date>>(); }
	jni::ref<sun::net::ftp::FtpDirEntry> setCreated(jni::ref<java::util::Date> p1) { return call_method<"setCreated", jni::ref<sun::net::ftp::FtpDirEntry>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FtpDirEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_FTP_FTPDIRENTRY