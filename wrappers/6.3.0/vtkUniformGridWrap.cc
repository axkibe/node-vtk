/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageDataWrap.h"
#include "vtkUniformGridWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUniformGridWrap::ptpl;

VtkUniformGridWrap::VtkUniformGridWrap()
{ }

VtkUniformGridWrap::VtkUniformGridWrap(vtkSmartPointer<vtkUniformGrid> _native)
{ native = _native; }

VtkUniformGridWrap::~VtkUniformGridWrap()
{ }

void VtkUniformGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUniformGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UniformGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkUniformGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUniformGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageDataWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageDataWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUniformGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BlankCell", BlankCell);
	Nan::SetPrototypeMethod(tpl, "blankCell", BlankCell);

	Nan::SetPrototypeMethod(tpl, "BlankPoint", BlankPoint);
	Nan::SetPrototypeMethod(tpl, "blankPoint", BlankPoint);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetGridDescription", GetGridDescription);
	Nan::SetPrototypeMethod(tpl, "getGridDescription", GetGridDescription);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewImageDataCopy", NewImageDataCopy);
	Nan::SetPrototypeMethod(tpl, "newImageDataCopy", NewImageDataCopy);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UnBlankCell", UnBlankCell);
	Nan::SetPrototypeMethod(tpl, "unBlankCell", UnBlankCell);

	Nan::SetPrototypeMethod(tpl, "UnBlankPoint", UnBlankPoint);
	Nan::SetPrototypeMethod(tpl, "unBlankPoint", UnBlankPoint);

	ptpl.Reset( tpl );
}

void VtkUniformGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUniformGrid> native = vtkSmartPointer<vtkUniformGrid>::New();
		VtkUniformGridWrap* obj = new VtkUniformGridWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUniformGridWrap::BlankCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->BlankCell(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridWrap::BlankPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->BlankPoint(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUniformGridWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkUniformGrid * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkUniformGridWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkUniformGridWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkUniformGridWrap *w = new VtkUniformGridWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkUniformGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkUniformGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUniformGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUniformGridWrap *w = new VtkUniformGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUniformGridWrap::GetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridDescription();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUniformGridWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUniformGridWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkUniformGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
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

void VtkUniformGridWrap::NewImageDataCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewImageDataCopy();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUniformGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	vtkUniformGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkUniformGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUniformGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUniformGridWrap *w = new VtkUniformGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUniformGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUniformGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkUniformGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUniformGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUniformGridWrap *w = new VtkUniformGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridWrap::UnBlankCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->UnBlankCell(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformGridWrap::UnBlankPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkUniformGridWrap>(info.Holder());
	vtkUniformGrid *native = (vtkUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->UnBlankPoint(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

