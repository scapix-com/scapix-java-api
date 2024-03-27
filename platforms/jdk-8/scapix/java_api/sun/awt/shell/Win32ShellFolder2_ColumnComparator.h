// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_COLUMNCOMPARATOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_COLUMNCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::shell { class Win32ShellFolder2_ColumnComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::shell::Win32ShellFolder2_ColumnComparator>
{
	static constexpr fixed_string class_name = "sun/awt/shell/Win32ShellFolder2$ColumnComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_COLUMNCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_COLUMNCOMPARATOR)
#define SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_COLUMNCOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/sun/awt/shell/Win32ShellFolder2.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::shell::Win32ShellFolder2_ColumnComparator : public jni::object_base<"sun/awt/shell/Win32ShellFolder2$ColumnComparator",
	java::lang::Object,
	java::util::Comparator>
{
public:

	static jni::ref<sun::awt::shell::Win32ShellFolder2_ColumnComparator> new_object(jni::ref<sun::awt::shell::Win32ShellFolder2> p1, jint p2) { return base_::new_object(p1, p2); }
	jint compare(jni::ref<java::io::File> p1, jni::ref<java::io::File> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	Win32ShellFolder2_ColumnComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_COLUMNCOMPARATOR