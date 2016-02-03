/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkMNITagPointWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkDoubleArrayWrap.h"
#include "vtkIntArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMNITagPointWriterWrap::ptpl;

VtkMNITagPointWriterWrap::VtkMNITagPointWriterWrap()
{ }

VtkMNITagPointWriterWrap::VtkMNITagPointWriterWrap(vtkSmartPointer<vtkMNITagPointWriter> _native)
{ native = _native; }

VtkMNITagPointWriterWrap::~VtkMNITagPointWriterWrap()
{ }

void VtkMNITagPointWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMNITagPointWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MNITagPointWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkMNITagPointWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMNITagPointWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMNITagPointWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComments", GetComments);
	Nan::SetPrototypeMethod(tpl, "getComments", GetComments);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetLabelText", GetLabelText);
	Nan::SetPrototypeMethod(tpl, "getLabelText", GetLabelText);

	Nan::SetPrototypeMethod(tpl, "GetPatientIds", GetPatientIds);
	Nan::SetPrototypeMethod(tpl, "getPatientIds", GetPatientIds);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "GetStructureIds", GetStructureIds);
	Nan::SetPrototypeMethod(tpl, "getStructureIds", GetStructureIds);

	Nan::SetPrototypeMethod(tpl, "GetWeights", GetWeights);
	Nan::SetPrototypeMethod(tpl, "getWeights", GetWeights);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComments", SetComments);
	Nan::SetPrototypeMethod(tpl, "setComments", SetComments);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetLabelText", SetLabelText);
	Nan::SetPrototypeMethod(tpl, "setLabelText", SetLabelText);

	Nan::SetPrototypeMethod(tpl, "SetPatientIds", SetPatientIds);
	Nan::SetPrototypeMethod(tpl, "setPatientIds", SetPatientIds);

	Nan::SetPrototypeMethod(tpl, "SetPoints", SetPoints);
	Nan::SetPrototypeMethod(tpl, "setPoints", SetPoints);

	Nan::SetPrototypeMethod(tpl, "SetStructureIds", SetStructureIds);
	Nan::SetPrototypeMethod(tpl, "setStructureIds", SetStructureIds);

	Nan::SetPrototypeMethod(tpl, "SetWeights", SetWeights);
	Nan::SetPrototypeMethod(tpl, "setWeights", SetWeights);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	ptpl.Reset( tpl );
}

void VtkMNITagPointWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMNITagPointWriter> native = vtkSmartPointer<vtkMNITagPointWriter>::New();
		VtkMNITagPointWriterWrap* obj = new VtkMNITagPointWriterWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMNITagPointWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITagPointWriterWrap::GetComments(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComments();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITagPointWriterWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITagPointWriterWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITagPointWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMNITagPointWriterWrap::GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelText();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITagPointWriterWrap::GetPatientIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	vtkIntArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPatientIds();
		VtkIntArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIntArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIntArrayWrap *w = new VtkIntArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITagPointWriterWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPoints(
			info[0]->Int32Value()
		);
			VtkPointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointsWrap *w = new VtkPointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITagPointWriterWrap::GetStructureIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	vtkIntArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructureIds();
		VtkIntArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIntArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIntArrayWrap *w = new VtkIntArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITagPointWriterWrap::GetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	vtkDoubleArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWeights();
		VtkDoubleArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITagPointWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	vtkMNITagPointWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMNITagPointWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMNITagPointWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMNITagPointWriterWrap *w = new VtkMNITagPointWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMNITagPointWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMNITagPointWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMNITagPointWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMNITagPointWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMNITagPointWriterWrap *w = new VtkMNITagPointWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::SetComments(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComments(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::SetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelText(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::SetPatientIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIntArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIntArrayWrap *a0 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPatientIds(
			(vtkIntArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoints(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPoints(
				info[0]->Int32Value(),
				(vtkPoints *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::SetStructureIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIntArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIntArrayWrap *a0 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStructureIds(
			(vtkIntArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::SetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDoubleArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDoubleArrayWrap *a0 = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWeights(
			(vtkDoubleArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMNITagPointWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMNITagPointWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMNITagPointWriterWrap>(info.Holder());
	vtkMNITagPointWriter *native = (vtkMNITagPointWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Write();
	info.GetReturnValue().Set(Nan::New(r));
}

