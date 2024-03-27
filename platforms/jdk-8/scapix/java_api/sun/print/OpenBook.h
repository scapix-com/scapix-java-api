// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/print/Pageable.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_OPENBOOK_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_OPENBOOK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class OpenBook; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::OpenBook>
{
	static constexpr fixed_string class_name = "sun/print/OpenBook";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::print::Pageable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_OPENBOOK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_OPENBOOK)
#define SCAPIX_JAVA_API_SUN_PRINT_OPENBOOK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/print/PageFormat.h>
#include <scapix/java_api/java/awt/print/Printable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::print::OpenBook : public jni::object_base<"sun/print/OpenBook",
	java::lang::Object,
	java::awt::print::Pageable>
{
public:

	jint getNumberOfPages() { return call_method<"getNumberOfPages", jint>(); }
	jni::ref<java::awt::print::PageFormat> getPageFormat(jint p1) { return call_method<"getPageFormat", jni::ref<java::awt::print::PageFormat>>(p1); }
	jni::ref<java::awt::print::Printable> getPrintable(jint p1) { return call_method<"getPrintable", jni::ref<java::awt::print::Printable>>(p1); }

protected:

	OpenBook(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_OPENBOOK
